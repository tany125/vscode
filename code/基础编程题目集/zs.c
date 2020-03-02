#include<stdio.h>
int main()
{   int i;
    int m,n;
    int isprime(int m);
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(isprime(i)!=1)
        continue;
        printf("%d ",i);
    }
    return 0;
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