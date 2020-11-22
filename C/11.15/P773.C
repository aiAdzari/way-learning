#include <stdio.h>

int main(void)
{
	int arr[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int year1, mon1, day1, year2, mon2, day2, i, sum = 0;

	printf("from the date (****/**/**):\n");
	scanf("%d/%d/%d", &year1, &mon1, &day1);
	printf("to the date(****/**/**):\n");
	scanf("%d/%d/%d", &year2, &mon2, &day2);

	for ( i = year1 < year2 ? year1 : year2; i < (year1 > year2 ? year1 : year2); i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			sum += 366;
		}
		else
		{
			sum += 365;
		}
		
		
	}
	for (i = mon1 < mon2 ? mon1 : mon2; i < (mon1 > mon2 ? mon1 : mon2); i++)
	{
		if ((year1 > year2 ? year1 : year2) % 4 == 0 
				&& (year1 > year2 ? year1 : year2) % 100 != 0 
						|| (year1 > year2 ? year1 : year2) % 400 == 0)
		{
			arr[2] = 29;
		}
		sum += arr[i];
	}
	if (day1 > day2)
	{
		sum += day1 - day2;
	}
	if (day1 < day2)
	{
		sum += day2 - day1;
	}
	printf("\nsum=%d\n", sum);

	return 0;
	
}