#include<stdio.h>
#include<string.h>

/* userCode(<50�ַ�): �Զ��庯��֮ԭ������ */
void nmsl(char str[], int n);

int main(void)
{
	char str[128];

	printf("Input a string: ");
	gets(str);

	nmsl(str, strlen(str));  /* userCode(<50�ַ�): ���ú������ַ���str������ */
	printf("\nThe result is: %s\n", str);
	return 0;
}

/* User Code Begin�������ڴ˺�����Զ��庯������ƣ��������� */
void nmsl(char str[], int n)
{
	int i, j;
	char tep, str2[127];

	for ( i = 0, j = n - 1; i < j; i++, j--)
	{
		tep = str[i];
		str[i] = str[j];
		str[j] = tep;
	}

}