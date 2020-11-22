#include <stdio.h>

/* userCode(<50字符): 自定义函数之原型声明 */
double f(int na);

int main(void)
{
	int n;
	double fn;

	printf("Input n (13>=n>=2): ");
	scanf("%d", &n);

	fn = f(n);  /* userCode(<50字符): 调用函数计算fn */
	printf("\nf(%d)=%.0f\n", n, fn);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
double f(int na)
{
	if (na < 3 && na >=0)
	{
		return na;
	}

	return 2 * f(na - 1) + f(na - 2) * f(na - 3);

}