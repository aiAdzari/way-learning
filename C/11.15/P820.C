#include <stdio.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
int fenduan(int n);

int main(void)
{
	int n;
	long int Fn;

	printf("Please input a number: ");
	scanf("%d", &n);

	Fn = fenduan(n);  /* userCode(<50�ַ�): ���ú�������f(n) */
	printf("\nf(%d) = %ld\n", n, Fn);
	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
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

