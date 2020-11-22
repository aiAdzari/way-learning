#include <stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
double fenduan(int n, int x);

int main(void)
{
	double Pnx;
	int n, x;

	printf("please input n, x: ");
	scanf("%d,%d", &n, &x);

	Pnx = fenduan(n , x);  /* userCode(<50字符): 调用函数计算Pn(x) */
	printf("\nThe answer is %.6f.\n", Pnx);
	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
double fenduan(int n, int x)
{
	if (n == 0)
	{
		return 1;
	}
	else if (n == 1)
	{
		return (double)x;
	}
	else if (n > 1)
	{
		return ((2 * n - 1) * x * fenduan(n - 1, x) - (n - 1) * fenduan(n - 2, x)) / n;
	}
	else
	{
		return - 1;
	}
	
}


