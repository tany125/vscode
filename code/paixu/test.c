#include<stdio.h>
int main()
{
    int a[10];
    int i, n, j;
    int tmp;
    scanf("%d", &n);
    for (i = 0; i < n;i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n - 1;i++)
    {
        for (j = 0; j < n - 1 - i;j++)
        {
            if(a[j]>a[j+1])
            {
                tmp= a[j+1];
                a[j + 1] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (i = 0; i < n;i++)
        printf("%d ", a[i]);
    return 0;
}