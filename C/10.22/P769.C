#include <stdio.h>

int main(void)
{
	int num1, num2, i, tep, jisu;

	printf("please input m, n(5<=m<=n<=100000): ");
	scanf("%d,%d", &num1, &num2);
	printf("Result(%d-%d):\n", num1, num2);

	/*for ( i = 10; i <= 100000; i*=10)
	{
		if (tep % i == tep)
		{
			weisu = i / 10;
		}
		
	}*/

	for (tep = num1; tep <= num2; tep++)
	{
		jisu = 0;
		for ( i = 2; i < tep; i++)
		{
			if (tep % i == 0 )
			{
				jisu++;
				break;
			}
		}
		if (jisu == 0)
		{
			if (tep <= 10)
			{
				printf("%d ", tep);
			}
			else if (tep <= 100)
			{
				if (tep / 10 == tep % 10)
				{
					printf("%d ", tep);
				}
			}
			else if (tep <= 1000)
			{
				if (tep / 100 == tep % 10)
				{
					printf("%d ", tep);
				}
			}
			else if (tep <= 10000)
			{
				if (tep / 1000 == tep % 10 && (tep % 1000) / 100 == (tep % 100) / 10)
				{
					printf("%d ", tep);
				}

			}
			else if (tep <= 100000)
			{
				if (tep / 10000 == tep % 10 && (tep % 10000) / 1000 == (tep % 100) / 10)
				{
					printf("%d ", tep);
				}	
			}
		}

	}

	return 0;

}
