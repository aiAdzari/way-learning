#include <stdio.h>

int main(void)
{
    double num1, num2;
    int num3, num4, num5;
    char rec1, rec2;
    printf("请输入7个数据（依次为2实数、3整数、2字符）：");
    scanf("%lf %lf %d %d %d %c %c", &num1, &num2, &num3, &num4, &num5, &rec1, &rec2);
    printf("\n这7个数据倒序为：7-%c 6-%c 5-%d 4-%d 3-%d 2-%.7lf 1-%.7lf", rec2, rec1, num5, num4, num3, num2, num1);

    return 0;
}