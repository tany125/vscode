#include<stdio.h>
void main()
{
    int a[10];
    int i,j,max,min; 
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    max=min=a[0]; 
    for(j=0;j<10;j++)
    {
        if(max<a[j])
        max=a[j];
        if(min>a[j])
        min=a[j];
    }
    printf("max=%d,min=%d",max,min);
}