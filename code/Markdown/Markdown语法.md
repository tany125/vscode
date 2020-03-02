# Helo world

*斜* _xie_
**粗**__cu__
***粗斜*** ___xiecu___
***
分割线
***
~~删除线~~

脚注
[^脚注]: hello world!

#Markdown列表
* 第一项
* 第二项
* 第三项
- 第一项
+ 第一项
1. 第一项:
    * 第一项嵌套的第一个元素
    * 第一项嵌套的第二个元素
2. 第二项
3. 第三项
#Markdown区块
>最外层
>>第一嵌套层
>>>第二嵌套层

>区块中使用列表
> 1. 第一项
> 2. 第二项
> + 第一项
> + 第二项

##列表中使用区块
* 列表
    >菜鸟教程
    >学的不仅仅是技术
* 第二项


#Markdown代码
`printf()`函数
```
#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    void PrintN(int N);
    PrintN(N);
    return 0;
}
void PrintN(int N)
{
    int i;
    for (i = 1; i <= N;i++)
    {
        printf("%d\n", i);
    }
}
```
#Markdown链接
[链接名称](链接地址)
或者
<链接地址>
[百度](www.baidu.com)

链接也可以用变量来代替，文档末尾附带变量地址：
这个链接用 1 作为网址变量 [Google][1]
这个链接用 runoob 作为网址变量 [Runoob][runoob]
然后在文档的结尾为变量赋值（网址）

  [1]: http://www.google.com/
  [runoob]: http://www.runoob.com/


#Markdown图片

![alt 属性文本](图片地址)

![alt 属性文本](图片地址 "可选标题")

* 开头一个感叹号 !
* 接着一个方括号，里面放上图片的替代文字
* 接着一个普通括号，里面放上图片的网址，最后还可以用引号包住并加上选择性的 'title' 属性的文字。

![RUNOOB 图标](http://static.runoob.com/images/runoob-logo.png)

![RUNOOB 图标](http://static.runoob.com/images/runoob-logo.png "RUNOOB")

#Markdown表格
|  表头   | 表头  |
|  ----  | ----  |
| 单元格  | 单元格 |
| 单元格  | 单元格 |
