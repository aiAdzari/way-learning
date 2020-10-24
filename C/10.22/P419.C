#include <stdio.h>

int main(void)
{
	int arr[100], i, n = 0, num1, tep;

	printf("Input: ");
	for (i = 0; i <= 99; i++)
	{
		scanf("%d", &tep);
		if (tep == -888)
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
	printf("\nResult: ");
	for (i = 0; i <= n - 1; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}