#include<stdio.h>
int main()
{   
    int m,n;
    int i;
    int isprime(int x);
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(isprime(i)==1)
            printf("%d ",i);
    }
    return 0;
}
int isprime(int x)
{
    int i,a=0;
    for (i = 2; i < x;i++)
    {
        if(x%i==0)
            a++;
    }
    if(a==0)
        return 1;
    else
        return 0;
}