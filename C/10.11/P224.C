#include <stdio.h>

int main(void)
{
	int num1, total = 1, jisu;

	printf("Please input n: ");
	scanf("%d", &num1);
	for (jisu = 1; jisu < num1; jisu++)
	{
		total = (total + 1) * 2 ;
	}
	printf("\ntotal=%d", total);

	return 0;
}