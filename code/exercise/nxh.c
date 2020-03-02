//本题要求编写程序,计算序列 1 - 1/4 + 1/7 - 1/10 + ... 的前N项之和。
#include<stdio.h>
int main()
{
    int i, j;
    double k=1, sum=0;
    scanf("%d", &j);
    for (i = 1; i <= j;i++)
    {
        sum += k;
        k = -1/(i + 3);
    }
    printf("%lf", sum);
    return 0;
}