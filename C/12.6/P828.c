#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[128], str2[128], str3[128], strmax[128];

	printf("Please input the first string:\t");
	gets(str1);
	printf("Please input the second string:\t");
	gets(str2);
	printf("Please input the third string:\t");
	gets(str3);

	if (strcmp(str1, str2) > 0)
	{
		strcpy(strmax, str1);
	}
	else
	{
		strcpy(strmax, str2);
	}
	if (strcmp(strmax, str3) < 0)
	{
		strcpy(strmax, str3);
	}

	printf("\n×î´ó×Ö·û´®ÊÇ£º%s", strmax);

	return 0;
	
	
}