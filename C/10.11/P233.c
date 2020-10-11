#include <stdio.h>

int main(void)
{
	int Num, thrdnum = 100, inum1, inum2, inum3, sum = 0, jisu = 0;

	printf("Please Input a number: ");
	scanf("%d", &Num);
	printf("\nResult: ");
	for (thrdnum=100; thrdnum <= 999; thrdnum++)
	{
		inum1 = (thrdnum / 100) * ((thrdnum % 100) / 10) * (thrdnum % 10);
		inum2 = ((thrdnum % 100) / 10) * ((thrdnum % 100) / 10);
		inum3 = (thrdnum % 10) * (thrdnum % 10) * (thrdnum % 10);
		sum = inum1 + inum2 + inum3;
		
		
		if (sum == Num)
		{
			printf("%4d", thrdnum);
			jisu ++;
		}
		
	}
	if (jisu == 0)
	{
		printf("not Find!\n");
	}
	
	/*while (thrdunm <= 999 && sum != Num)
	{
		inum1 = (thrdnum / 100) * ((thrdnum % 100) / 10) * (thrdnum % 10);
		inum2 = ((thrdnum % 100) / 10) * ((thrdnum % 100) / 10);
		inum3 = (thrdnum % 10) * (thrdnum % 10) * (thrdnum % 10)
		sum = inum1 + inum2 + inum3;
	}*/

	return 0;
}