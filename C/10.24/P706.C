#include <stdio.h>

int main(void)
{
	int arr[10], i, n, tep;

	printf("Please input 10 number:\n");
	for ( i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for ( i = 0; i < 10; i++)
	{
		for ( n = 0; n < 10 - i - 1; n++)
		{
			if (arr[n] > arr[n + 1])
			{
				tep = arr[n];
				arr[n] = arr[n + 1];
				arr[n + 1] = tep;
			}
			
		}
		
	}
	for ( i = 0; i < 10; i++)
	{
		printf("%5d", arr[i]);
	}
	
	return 0;
	

}