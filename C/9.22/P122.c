#include <stdio.h>

int main(void)
{
    int num1, num2, num4;
    double num3;
    printf("请输入4个数：");
    scanf("%d %d %lf %d", &num1, &num2, &num3, &num4);
    printf("\n计算结果为：%016.7lf\n", (num1 % num2) * num3 + num4);

    return 0;

}