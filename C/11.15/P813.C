#include <stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
double f(int na);

int main(void)
{
	int n;
	double fn;

	printf("Input n (13>=n>=2): ");
	scanf("%d", &n);

	fn = f(n);  /* userCode(<50�ַ�): ���ú�������fn */
	printf("\nf(%d)=%.0f\n", n, fn);

	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
double f(int na)
{
	if (na < 3 && na >=0)
	{
		return na;
	}

	return 2 * f(na - 1) + f(na - 2) * f(na - 3);

}