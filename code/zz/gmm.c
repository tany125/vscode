#include<stdio.h>
int main()
{
    int key = 123456;
    printf("before update,key is: %d\n", key);
    updateKey(&key);
    printf("after update,key is: %d\n", key);
    return 0;
}
void updateKey(int *p)
{
    int newkey;
    printf("input newkey:");
    scanf("%d", &newkey);
    *p = newkey;
}

