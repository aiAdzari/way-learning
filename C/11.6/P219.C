#include <stdio.h>

int main(void)
{
	int i, geshu = 0;
	char arr[128], arr2[128];

	printf("Please input string: ");
	gets(arr);

	for (i = 0; i < 128; i++)
	{
		if (arr[i] >= 48 && arr[i] <= 57)
		{
			arr2[geshu] = arr[i];
			geshu++;
		}
		else
		{
			if (arr[i] == '\0')
			{
				break;
			}
		}
	}
	arr2[geshu] = '\0';
	printf("\nshu zi ge shu wei: %d", geshu);
	printf("\nshu zi wei: %s", arr2);

	return 0;
}

