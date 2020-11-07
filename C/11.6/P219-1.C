#include <stdio.h>

int main(void)
{
	char arr1[128], arr2[128];
	int geshu = 0, i;

	printf("Please input string: ");
	gets(arr1);
	for ( i = 0; i < 128; i++)
	{
		if (arr1[i] >= '0' && arr1[i] <= '9')
		{
			arr2[geshu] = arr1[i];
			geshu++;
		}
		
	}
	arr2[geshu - 1] = '\0';
	printf("\nshu zi ge shu wei: %d", geshu -1);
	printf("\nshu zi wei: %s", arr2);

	return 0;
	
}