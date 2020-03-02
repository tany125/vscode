#include<stdio.h>
int main()
{
    double x;
    int result=0;
    scanf("%d", &x);
    if(x==0)
        printf("f(%d) = 0.0\n",x);
    if(x!=0)
    {
        printf("f(%d) = %f",x,1 / x);
    }
    
    return 0;
}