#include <stdio.h>

int sum(int y,int m,int d)
{
	int x[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int i, s = 0;

	for(i = 1; i < y; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			s += 366;//闰年
		}
		else
		{
			s += 365;//平年
		}
	}
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
		{
			x[2] = 29;
		}

	for(i = 1; i < m; i++)
	{
		s += x[i];//整月的天数
		s += d;//日的天数
	}
	return s;//返回总天数,相对公元1年
}

int main(void)
{
	int y1, m1, d1, y2, m2, d2;
	int s1, s2;

	printf("from the date (****/**/**):\n");
	scanf("%d/%d/%d", &y1, &m1, &d1);
	printf("to the date(****/**/**):\n");
	scanf("%d/%d/%d", &y2, &m2, &d2);
	s1 = sum(y1, m1, d1);
	s2 = sum(y2, m2, d2);
	if (s1 > s2)
	{
		printf("\nsum=%d\n", s1 - s2);
	}
	else 
	{
		printf("\nsum=%d\n", s2 - s1);
	}

	return 0;
}