#include <stdio.h>

void vanshu(int range1, int range2);

int main(void)
{
	int range1, range2;

	printf("Input 2 integer to determine the range: ");
	scanf("%d %d", &range1, &range2);
	vanshu(range1 < range2 ? range1 : range2, range1 < range2 ? range2 : range1);

	return 0;
}

void vanshu(int range1, int range2)
{
	static int i, n, sum, count = 0;
	
	printf("\nwanShu is: ");
	for ( i = range1; i <= range2; i++)
	{
		sum = 0;
		for ( n = 1; n < i; n++)
		{
			if (i % n == 0)
			{
				sum = sum + n;
			}
		}
		if (sum == i)
		{
			printf("%d ", i);
			count++;
		}
		
	}
	printf("\n   Count = %d\n", count);
}