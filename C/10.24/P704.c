#include <stdio.h>

int main(void)
{
	int num1, i, arr[100] = {0}, tep, n, sum = 0;

	printf("Please input an integer: ");
	scanf("%d", &num1);
	for ( tep = 1; tep <= num1; tep++)
	{
		n = 0;
		sum = 0;
		for ( i = 1; i < tep; i++)
		{
			if (tep % i == 0)
			{
				arr[n] = i;
				n++;
			}
			
		}
		for ( i = 0; i < n; i++)
		{
			sum = sum + arr[i];
		}
		if (sum == tep)
			{
				printf("%d is a wanshu", tep);
				for ( i = 0; i < n; i++)
				{
					printf(" %d", arr[i]);
				}
				printf("\n");
				
			}
		
		
	}

	return 0;
	

}