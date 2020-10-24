#include <stdio.h>

int main(void)
{
	int arr1[5], arr2[5], i, sum = 0;

	printf("Input A: ");
	for ( i = 0; i < 5; i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("Input B: ");
	for ( i = 0; i < 5; i++)
	{
		scanf("%d", &arr2[i]);
	}
	for ( i = 0; i < 5; i++)
	{
		sum = sum + arr1[i] * arr2[4 - i];
	}
	printf("\nsum=%d\n", sum);

	return 0;
	
}