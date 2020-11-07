#include <stdio.h>

int main(void)
{
	int n, arr[14][14], sum1 = 0, sum2 = 0, i, j;

	printf("Enter n: ");
	scanf("%d", &n);
	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j < n; j++)
		{
			arr[i][j] = (i + j) * n;
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j < n; j++)
		{
			if (i != 0 && i != n - 1 && j !=0 && j != n - 1)
			{
				sum1 = sum1 + arr[i][j];
			}
			if (i + j == n - 1)
			{
				sum2 = sum2 + arr[i][j];
			}
			
		}
		
	}
	printf("\nsum1=%d\nsum2=%d\n", sum1, sum2);

	return 0;
	
	
}