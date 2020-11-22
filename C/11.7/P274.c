#include <stdio.h>
#include <string.h>

int main(void)
{
	int num[128] = {0}, i;
	char arr[128];

	printf("请输入一行字符：");
	gets(arr);
	printf("统计结果为：\n");
	for (size_t i = 0; i < strlen(arr); i++)
	{
		if (arr[i] >= 'A' && arr[i] <= 'Z')
		{
			num[(int)arr[i]]++;
		}

		else if (arr[i] >= 'a' && arr[i] <= 'z')
		{
			num[(int)arr[i] - 32]++;
		}
		
	}
	for ( i = 0; i < 128; i++)
	{
		if (num[i] != 0)
		{
			printf("%c-%d\n", (char)i, num[i]);
		}
		
	}

	return 0;
	
	
	
}