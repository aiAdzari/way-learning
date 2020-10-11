#include <stdio.h>

int main(void)
{
	int num1, num2, midnum;

	printf("Input m, n: ");
	scanf("%d,%d", &num1, &num2);
	printf("\nResult: ");
	midnum = (num1 > num2 ? num2 : num1);
	while (midnum >= (num1 > num2 ? num2 : num1) && midnum <= (num1 > num2 ? num1 : num2))
	{
		if (((midnum / 100) == 5 || ((midnum % 100) / 10) == 5 || ((midnum % 10) == 5)) && (midnum % 3 == 0))
		{
			printf("%d ", midnum);
		}
		midnum++;
	}
	
	return 0;


}