#include <stdio.h>

int main(void)
{
	float num1, num2, num3, num4, num5, min;

	printf("请输入5个实数: ");
		scanf("%f,%f,%f,%f,%f", &num1, &num2, &num3, &num4, &num5);
	min = num1;
	if (min > num2)
	{
		min = num2;
	}
	if (min > num3)
	{
		min = num3;
	}
	if (min > num4)
	{
		min = num4;
	}
	if (min > num5)
	{
		min = num5;
	}
	
	
	printf("\n最小的数是 %.2f\n", min);

	return 0;
}