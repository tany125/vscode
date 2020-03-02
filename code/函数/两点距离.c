//计算两点距离
#include<stdio.h>
#include<math.h>
int main()
{
    float x1;
    float x2;
    float y1;
    float y2;
    float distance(float x1, float x2, float y1, float y2);
    printf("请输入第一个坐标x1,y1:");
    scanf("%f,%f", &x1, &y1);
    printf("请输入第二个坐标x2,y2:");
    scanf("%f,%f", &x2, &y2);
    printf("%f", distance(x1, x2, y1, y2));
    return 0;
}
float distance(float x1,float x2,float y1,float y2)
{
    float result;
    result = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    return result;
}