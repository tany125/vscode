import requests, os, time
from lxml import etree
 
 
class Spider():
    def __init__(self):
        self.headers = {
            'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_3) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/79.0.3945.130 Safari/537.36',
            'Referer': 'https://www.meitulu.com/xihuan/'
        }
        self.url = 'https://www.meitulu.com/'
        #分类：可自行修改。
        self.name = 'rihan'
 
 
    def response(self, url):
        response = requests.get(url, headers=self.headers)
        html = etree.HTML(response.content.decode())
        return html
 
 
    def start(self):
        #根据需求填写range
        for i in range(1, 5):
            print('正在打开第%s页'%i)
            html = self.response(self.url + '/' + self.name + str(i) + '.html' )
            self.jiexi(html)
 
 
    def jiexi(self,html):
 
        addr_list = html.xpath('/html/body/div[2]/div[2]/ul/li/a/@href')
        name_list = html.xpath('/html/body/div[2]/div[2]/ul/li/a/img/@alt')
 
        for addr, name in zip(addr_list, name_list):
            self.file_name = name
            print(addr)
            print(name)
            m = 1
            html1 = self.response(addr)
            all_ye = html1.xpath('string(//*[@id="pages"]/a[last()-1])')
            for i in range(1, int(all_ye)):
                new_allye = '_' + str(m)
                new_addr = addr.replace('.html', new_allye)
                html_ye = self.response(new_addr + '.html')
                #根据需求调整下载速度，太快容易被封IP
                time.sleep(0.5)
                if m == all_ye:
                    break
                else:
                    self.down(html_ye)
                    m += 1
 
 
    def down(self, html):
        #windows用户请修改路径
        file_path = 'F:\vscode\code\paixu' + self.file_name
        if not os.path.exists(file_path):
            os.mkdir(file_path)
            print(file_path + '创建成功')
        else:
            pass
        os.chdir(file_path)
 
        p_addr_all = html.xpath("/html/body/div[4]/center/img/@src")
        for i in p_addr_all:
            response = requests.get(i, headers=self.headers)
            p_name = i[42:]
            print('正在下载：'+ self.file_name + i[42:])
            try:
                with open(p_name, 'wb') as f:
                    f.write(response.content)
            except:
                print('文件名错误')
 
 
 
if __name__ == '__main__':
    sp = Spider()
    sp.start()