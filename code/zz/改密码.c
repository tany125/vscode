#include<stdio.h>
void display(int pwd)
{
    printf("密码为%d\n", pwd);
}
void updatePwd1(int pwd)
{
    int temp;  
    printf("输入新密码：");
    scanf("%d", &temp);
    pwd = temp;
}
void updatePwd2(int *pwd)
{
    int temp;
    printf("输入新密码：");
    scanf("%d", &temp);
    *pwd = temp;
}
void main()
{
    int password = 123456;
    printf("未修改前：");
    display(password);
    updatePwd1(password);
    printf("修改方案1执行后：");
    display(password);
    password = 123456;
    updatePwd2(&password);
    printf("修改方案2执行后：");
    display(password);
}