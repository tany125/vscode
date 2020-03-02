#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    void PrintN(int N);
    PrintN(N);
    return 0;
}
void PrintN(int N)
{
    int i;
    for (i = 1; i <= N;i++)
    {
        printf("%d\n", i);
    }
}