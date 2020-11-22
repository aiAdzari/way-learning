#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char arr[128];

	printf("Please input string: ");
	gets(arr);
	printf("\nzi fu chuan chang du: %d", strlen(arr));
	for (i = 0; (size_t)i < strlen(arr); i++)
	{
		if (arr[i] >= 'A' && arr[i] <= 'Z')
		{
			arr[i] = 'Z' - arr[i] + 'A';
		}
		else if (arr[i] >= 'a' && arr[i] <= 'z')
		{
			arr[i] = 'z' - arr[i] + 'a';
		}
		
		
	}
	printf("\nmi wen: %s", arr);

	return 0;
	
}