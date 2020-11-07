#include <stdio.h>

int main(void)
{
	char ch[128], m1, mu2, mu3, mu4, mu5, mu6, mu7, mu8, mu9, mu10, mu11, mu12, mu13, mu14, mu15, mu16, mu17, mu18,
		mu19, mu20, mu21, mu22, mu23, mu24, mu25, mu26;
	int shu1 = 0, shu2 = 0, shu3 = 0, shu4 = 0, shu5 = 0, shu6 = 0, shu7 = 0, shu8 = 0, shu9 = 0, shu10 = 0, shu11 = 0,
		shu12 = 0, shu13 = 0, shu14 = 0, shu15 = 0, shu16 = 0, shu17 = 0, shu18 = 0, shu19 = 0, shu20 = 0, shu21 = 0,
		shu22 = 0, shu23 = 0, shu24 = 0, shu25 = 0, shu26 = 0, jishu;

	printf("请输入一行字符：");
	gets(ch);
	printf("统计结果为：\n");
	for (jishu = 0; jishu <= 127; jishu++)
	{
		if (ch[jishu] == 'A' || ch[jishu] == 'a')
		{
			shu1++;
			m1 = 'A';
		}
		if (ch[jishu] == 'B' || ch[jishu] == 'b')
		{
			shu2++;
			mu2 = 'B';
		}
		if (ch[jishu] == 'C' || ch[jishu] == 'c')
		{
			shu3++;
			mu3 = 'C';
		}
		if (ch[jishu] == 'D' || ch[jishu] == 'd')
		{
			shu4++;
			mu4 = 'D';
		}
		if (ch[jishu] == 'E' || ch[jishu] == 'e')
		{
			shu5++;
			mu5 = 'E';
		}
		if (ch[jishu] == 'F' || ch[jishu] == 'f')
		{
			shu6++;
			mu6 = 'F';
		}
		if (ch[jishu] == 'G' || ch[jishu] == 'g')
		{
			shu7++;
			mu7 = 'G';
		}
		if (ch[jishu] == 'H' || ch[jishu] == 'h')
		{
			shu8++;
			mu8 = 'H';
		}
		if (ch[jishu] == 'I' || ch[jishu] == 'i')
		{
			shu9++;
			mu9 = 'I';
		}
		if (ch[jishu] == 'J' || ch[jishu] == 'j')
		{
			shu10++;
			mu10 = 'J';
		}
		if (ch[jishu] == 'K' || ch[jishu] == 'k')
		{
			shu11++;
			mu11 = 'K';
		}
		if (ch[jishu] == 'L' || ch[jishu] == 'l')
		{
			shu12++;
			mu12 = 'L';
		}
		if (ch[jishu] == 'M' || ch[jishu] == 'm')
		{
			shu13++;
			mu13 = 'M';
		}
		if (ch[jishu] == 'N' || ch[jishu] == 'n')
		{
			shu14++;
			mu14 = 'N';
		}
		if (ch[jishu] == 'O' || ch[jishu] == 'o')
		{
			shu15++;
			mu15 = 'O';
		}
		if (ch[jishu] == 'P' || ch[jishu] == 'p')
		{
			shu16++;
			mu16 = 'P';
		}
		if (ch[jishu] == 'Q' || ch[jishu] == 'q')
		{
			shu17++;
			mu17 = 'Q';
		}
		if (ch[jishu] == 'R' || ch[jishu] == 'r')
		{
			shu18++;
			mu18 = 'R';
		}
		if (ch[jishu] == 'S' || ch[jishu] == 's')
		{
			shu19++;
			mu19 = 'S';
		}
		if (ch[jishu] == 'T' || ch[jishu] == 't')
		{
			shu20++;
			mu20 = 'T';
		}
		if (ch[jishu] == 'U' || ch[jishu] == 'u')
		{
			shu21++;
			mu21 = 'U';
		}
		if (ch[jishu] == 'V' || ch[jishu] == 'v')
		{
			shu22++;
			mu22 = 'V';
		}
		if (ch[jishu] == 'W' || ch[jishu] == 'w')
		{
			shu23++;
			mu23 = 'W';
		}
		if (ch[jishu] == 'X' || ch[jishu] == 'x')
		{
			shu24++;
			mu24 = 'X';
		}
		if (ch[jishu] == 'Y' || ch[jishu] == 'y')
		{
			shu25++;
			mu25 = 'Y';
		}
		if (ch[jishu] == 'Z' || ch[jishu] == 'z')
		{
			shu26++;
			mu26 = 'Z';
		}
	}
	if (shu1 != 0)
	{
		printf("%c-%d\n", m1, shu1);
	}
	if (shu2 != 0)
	{
		printf("%c-%d\n", mu2, shu2);
	}
	if (shu3 != 0)
	{
		printf("%c-%d\n", mu3, shu3);
	}
	if (shu4 != 0)
	{
		printf("%c-%d\n", mu4, shu4);
	}
	if (shu5 != 0)
	{
		printf("%c-%d\n", mu5, shu5);
	}
	if (shu6 != 0)
	{
		printf("%c-%d\n", mu6, shu6);
	}
	if (shu7 != 0)
	{
		printf("%c-%d\n", mu7, shu7);
	}
	if (shu8 != 0)
	{
		printf("%c-%d\n", mu8, shu8);
	}
	if (shu9 != 0)
	{
		printf("%c-%d\n", mu9, shu9);
	}
	if (shu10 != 0)
	{
		printf("%c-%d\n", mu10, shu10);
	}
	if (shu11 != 0)
	{
		printf("%c-%d\n", mu11, shu11);
	}
	if (shu12 != 0)
	{
		printf("%c-%d\n", mu12, shu12);
	}
	if (shu13 != 0)
	{
		printf("%c-%d\n", mu13, shu13);
	}
	if (shu14 != 0)
	{
		printf("%c-%d\n", mu14, shu14);
	}
	if (shu15 != 0)
	{
		printf("%c-%d\n", mu15, shu15);
	}
	if (shu16 != 0)
	{
		printf("%c-%d\n", mu16, shu16);
	}
	if (shu17 != 0)
	{
		printf("%c-%d\n", mu17, shu17);
	}
	if (shu18 != 0)
	{
		printf("%c-%d\n", mu18, shu18);
	}
	if (shu19 != 0)
	{
		printf("%c-%d\n", mu19, shu19);
	}
	if (shu20 != 0)
	{
		printf("%c-%d\n", mu20, shu20);
	}
	if (shu21 != 0)
	{
		printf("%c-%d\n", mu21, shu21);
	}
	if (shu22 != 0)
	{
		printf("%c-%d\n", mu22, shu22);
	}
	if (shu23 != 0)
	{
		printf("%c-%d\n", mu23, shu23);
	}
	if (shu24 != 0)
	{
		printf("%c-%d\n", mu24, shu24);
	}
	if (shu25 != 0)
	{
		printf("%c-%d\n", mu25, shu25);
	}
	if (shu26 != 0)
	{
		printf("%c-%d\n", mu26, shu26);
	}


	return 0;
}
