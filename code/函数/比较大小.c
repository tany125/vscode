//比较两个数的大小
#include<stdio.h>
int main()
{
    int a, b,max;
    scanf("%d %d", &a, &b);
    int compare(int a, int b);
    max = compare(a, b);
    printf("%d", max);
    return 0;
}
int compare(int a,int b)
{
    int result;
    if(a>b)
        result = a;
        else
            result = b;
        return result;
}