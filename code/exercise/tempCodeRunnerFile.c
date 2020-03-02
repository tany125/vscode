#include<stdio.h>
int main()
{
    int i,n,x;
    int jc(int x);
    scanf("%d", &n);
    double k=0,sum=1;
    for (i = 1; i <= n;i++)
    {
        sum += k;
        k = 1.0 / jc(i);
    }
    printf("%.8lf", sum);
    return 0;
}
int jc(int x)
{
    int i, result=1;
    for (i = 1; i <= x;i++)
    {
        result = result * i;
    }
    return result;
}