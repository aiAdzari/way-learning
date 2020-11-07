#include <stdio.h>

int main(void)
{
	int arr[20][20], mnum, i, j, sum = 0;

	printf("Please input m: ");
	scanf("%d", &mnum);
	printf("\nPlease input array:\n");
	for ( i = 0; i < mnum; i++)
	{
		for ( j = 0; j < mnum; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for ( i = 0; i < mnum; i++)
	{
		sum = sum + arr[i][0] + arr[i][mnum - 1];
	}
		
	printf("\nSum = %d\n", sum);

	return 0;
	
	
}