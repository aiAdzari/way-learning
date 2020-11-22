#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, length = 0, n;
	char arr[128], arr2[128];

	printf("Please intput the string: ");
	gets(arr);
	for ( n = 0, length = 0, i = 0; (size_t)i < strlen(arr); i++)
	{
		if (arr[i] >= '0' && arr[i] <= '9')
		{
			length++;
			arr2[n] = arr[i];
			n++;
		}
		
	}
	arr2[n] = '\0';
	printf("\nDigistal string length = %d, Digitals: %s\n", length, arr2);
	for ( n = 0, length = 0, i = 0; (size_t)i < strlen(arr); i++)
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
		{
			length++;
			arr2[n] = arr[i];
			n++;
		}
		
	}
	arr2[n] = '\0';
	printf("\nazLetter string length = %d, azLetters: %s\n", length, arr2);
	for ( n = 0, length = 0, i = 0; (size_t)i < strlen(arr); i++)
	{
		if (arr[i] >= 'A' && arr[i] <= 'Z')
		{
			length++;
			arr2[n] = arr[i];
			n++;
		}
		
	}
	arr2[n] = '\0';
	printf("\nAZLetter string length = %d, AZLetters: %s\n", length, arr2);
	for ( n = 0, length = 0, i = 0; (size_t)i < strlen(arr); i++)
	{
		if (!(arr[i] >= 'A' && arr[i] <= 'Z' || arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= '0' && arr[i] <= '9'))
		{
			length++;
			arr2[n] = arr[i];
			n++;
		}
		
	}
	arr2[n] = '\0';
	printf("\nSymbol string length = %d, Symbols: %s\n", length, arr2);

	return 0;

}