#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, zimu = 0, shuzi = 0, kongge = 0, qita = 0;
	char arr[128];

	printf("Please input string: ");
	gets(arr);
	
	for (i = 0; (size_t)i < strlen(arr); i++)
	{
		if (arr[i] >= '0' && arr[i] <='9')
		{
			shuzi++;
		}
		else if (arr[i] >= 'A' && arr[i] <='Z' || arr[i] >= 'a' && arr[i] <='z')
		{
			zimu++;
		}
		else if (arr[i] == ' ')
		{
			kongge++;
		}
		else
		{
			qita++;
		}
	
	}
	printf("\nzimu=%d,shuzi=%d,kongge=%d,qita=%d\n", zimu, shuzi, kongge, qita);

	return 0;
	
}