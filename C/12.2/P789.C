#include <stdio.h>

/* userCode(<80字符): 自定义函数之原型声明 */
void deleteother(char *str);

int main(void)
{
	char str[100];

	printf("Please input the string : ");
	gets(str);

	deleteother(str);
	printf("\noutput: %s\n", str);

	return 0;
}

/* User Code Begin：考生在此后完成自定义函数的设计，行数不限 */
void deleteother(char *str)
{
	int i, j = 0;
	char str1[100];

	for ( i = 0; i < 100; i++)
	{
		if (str[i] == '\0')
		{
			str1[j] = str[i];
			break;
		}
		else if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
		{
			str1[j] = str[i];
			j++;	
		}
	
	}
	j = 0;
	for ( i = 0; i < 100; i++)
	{
		if (str1[j] != '\0')
		{
			str[i] = str1[j];
		}
		else
		{
			str[i] = str1[j];
			break;
		}
		j++;
		
		
		
	}
	
}