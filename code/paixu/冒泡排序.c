#include<stdio.h>
int main(){
    int m, i,temp,j;
    int a[10];
    scanf("%d", &m);
    for (i = 0; i < m;i++)
        scanf("%d", &a[i]);
    for (i = 0; i < m - 1;i++)
    {
        for (j = 0; j < m - 1 - i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            } 
        }
    }
 //   printf("%d %d\n", a[0], a[m - 1]);
    for (i = 0; i < n; i++)
        printf("%d", a[i]);
        return 0;
}