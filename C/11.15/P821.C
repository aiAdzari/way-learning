#include <stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
double fenduan(int n, int x);

int main(void)
{
	double Pnx;
	int n, x;

	printf("please input n, x: ");
	scanf("%d,%d", &n, &x);

	Pnx = fenduan(n , x);  /* userCode(<50�ַ�): ���ú�������Pn(x) */
	printf("\nThe answer is %.6f.\n", Pnx);
	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
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

