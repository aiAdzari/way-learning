#include <stdio.h>

int main(void)
{
	int iBegin, iEnd;

	printf("Please Input two number: ");
	scanf("%d%d", &iBegin, &iEnd);
	printf("\nResult: ");
	while (iBegin <= iEnd)
	{
		printf(" %d", iBegin);
		iBegin++;
	}
	
	return 0;

}