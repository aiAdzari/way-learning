#include<stdio.h>
#include<string.h>

/* userCode(<50字符): 自定义函数之原型声明 */
void nmsl(char str[], int n);

int main(void)
{
	char str[128];

	printf("Input a string: ");
	gets(str);

	nmsl(str, strlen(str));  /* userCode(<50字符): 调用函数将字符串str逆序存放 */
	printf("\nThe result is: %s\n", str);
	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
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