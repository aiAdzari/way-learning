#include <stdio.h>

int main(void)
{
	char arr[128] = {'\0'}, tem;
	int i, n, geshu;

	printf("input the string: ");

	for (i = 0; i < 128; i++)
	{
		arr[i] = getchar();

		if (arr[i] == '\n')
		{
			arr[i] = '\0';
			geshu = i;
			break;
		}
	}
	for (i = 0; i < geshu; i++)
	{
		for (n = 0; n < geshu - i - 1; n++)
		{
			if (arr[n] > arr[n + 1])
			{
				tem = arr[n];
				arr[n] = arr[n + 1];
				arr[n + 1] = tem;
			}
		}
	}

	printf("\nResult: %s", arr);

	return 0;
}


