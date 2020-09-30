#include <stdio.h>

int main(void)
{
	int mon;
	
	printf("please input the month number: ");
	scanf("%d", &mon);
	if (mon <= 12)
	{
		if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12)
		{
			printf("\n2003.%d has 31 days\n", mon);
		}
		else if (mon == 2)
		{
			printf("\n2003.%d has 28 days\n", mon);
		}
		else 
		{
			printf("\n2003.%d has 30 days\n", mon);
		}
	}
	else
	{
		printf("\nInvalid month input !\n");
	}

	return 0;
}