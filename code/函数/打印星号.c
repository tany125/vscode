//打印*号
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    void printstart(int n);
    printstart(n);
    return 0;
}
void printstart(int n)
{
    int i;
    for (i = 1; i <= n;i++)
        printf("*");
}