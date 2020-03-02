#include<stdio.h>
int main()
{
    int a[10],min;
    int n,i;
    scanf("%d", &n);
    for (i = 0; i < n;i++)
        scanf("%d", &a[i]);
    min = a[0];
    for (i = 0; i < n;i++)
    {
        if(a[i]<min)
            min = a[i];
    }
    printf("min = %d\n", min);
    return 0;
}