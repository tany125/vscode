//要求定义函数sign（x）
//其中x>0时，函数值为1；
//x=0时，函数值为0；
//x<0时，函数值为-1；
#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int sign(int x);
    printf("%d", sign(x));
    return 0;
}
int sign(int x)
{
    int result;
    if(x>0)
        result = 1;
    if(x==0)
        result = 0;
    if(x<0)
        result = -1;
    return result;
}