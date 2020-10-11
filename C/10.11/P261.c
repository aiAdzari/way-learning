#include <stdio.h>

int main(void)
{
	char cBegin, cEnd;

	printf("Please Input two char: ");
	scanf("%c%c", &cBegin, &cEnd);
	printf("\nResult: ");
	while (cBegin >= cEnd)
	{
		printf("%c", cBegin);
		printf("%c,", cBegin + 1);
		cBegin--;
	}
	
	return 0;
}