#include<stdio.h>
int main()
{
    int m=3, *p;
    p = &m;
    printf("%d %d\n", m, *p);
    *p = 10;
    printf("m=%d,*p=%d\n", m, *p);
    printf("please input m:");
    scanf("%d", &m);
    printf("m=%d,*p=%d\n", m, *p);
    (*p)++;
    printf("m=%d,*p=%d", m, *p);
    return 0;
}