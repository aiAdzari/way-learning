#include <stdio.h>

int main(void)
{
	int arr[15], i, num1, n = 0;

	printf("please input 15 integer numbers:\n");
	for ( i = 0; i < 15; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("please input the integer you want to find: ");
	scanf("%d", &num1);
	for ( i = 0; i < 15; i++)
	{
		if (arr[i] == num1)
		{
			printf("\n%d has been found,it is a[%d]\n", num1, i);
			n++;
		}
		
	}
	if (n == 0)
	{
		printf("\n%d has not been found\n", num1);
	}

	return 0;

	
}