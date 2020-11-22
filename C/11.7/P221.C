#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr[128];
	int i, cisu = 0;

	printf("Please input string: ");
	gets(arr);
	for ( i = 0; (size_t)i < strlen(arr) / 2; i++)
	{
		if (arr[i] != arr[strlen(arr) - 1 - i])
		{
			cisu++;
		}
		
	}
	if (cisu == 0)
	{
		printf("\n%s shi hui wen.", arr);
	}
	else
	{
		printf("\n%s bu shi hui wen.", arr);
	}
	
	return 0;
	
}