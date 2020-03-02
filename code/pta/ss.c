#include<stdio.h>
int main()
{    
    int N,i,a;
    int isprime(int x);
    scanf("%d", &N);
    for (i = 1; i <= N;i++)
    {
        scanf("%d", &a);
        if(isprime(a)==1)
            printf("Yes\n");
        if(isprime(a)==0)
            printf("No\n");
    }
}
int isprime(int x)
{
    int i;
    for (i = 2; i < x;i++)
    if(x%i==0)
        return 0;
    else
        return 1;
}