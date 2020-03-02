#include<stdio.h>
void main()
{
    int x;
    int isprime(int m);
    printf("输入一个数：");
    scanf("%d", &x);
    if(isprime(x)==0)
        printf("该数不是素数！\n");
    if(isprime(x)==1)
        printf("该数为素数！\n");
    
}
int isprime(int m)
{
    int i;
    for (i = 2; i < m;i++)
    if(m%i==0)
        return 0;
    else
        return 1;
}