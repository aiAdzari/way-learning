#include <stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
int fenduan(int n);

int main(void)
{
	int n;
	long int Fn;

	printf("Please input a number: ");
	scanf("%d", &n);

	Fn = fenduan(n);  /* userCode(<50字符): 调用函数计算f(n) */
	printf("\nf(%d) = %ld\n", n, Fn);
	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
int fenduan(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else if (n > 1)
	{
		return 2 * fenduan(n / 2) + n;
	}
	else
	{
		return 0;
	}
}


