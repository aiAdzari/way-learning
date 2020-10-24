#include <stdio.h>

int main(void)
{
	int arr[10000] = { 0 }, i, n = 0, tep, num1;

	printf("Please input numbers: ");
	for (i = 0; i <= 9999; i++)
	{
		scanf("%d", &tep);
		if (tep == -222)
		{
			i--;
			break;
		}
		else
		{
			arr[i] = tep;
			n++;
		}
	}
	for (i = 0; i <= n-2; i++)
	{
		for (num1 = 0; num1 <= n - 2 - i; num1++)
		{
			if (arr[num1] > arr[num1 + 1])
			{
				tep = arr[num1 + 1];
				arr[num1 + 1] = arr[num1];
				arr[num1] = tep;
			}
		}
	}
	printf("\nOutput:\n");
	for (i = 0; i <= n-1; i++)
	{
		if (i % 6 == 0 && i != 0)
		{
			printf("\n%-6d", arr[i]);
		}
		else if ( i == 0)
		{
			printf("%-6d", arr[i]);
		}
		else
		{
			printf(",%-6d", arr[i]);
		}
	}

	return 0;
}



