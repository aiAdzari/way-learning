#include<stdio.h>

#include<string.h>

int main(void)

{
	char str[5][81], stra[81];
	int i, j;

	printf("Input 5 strings:\n");
	gets(str[0]);
	gets(str[1]);
	gets(str[2]);
	gets(str[3]);
	gets(str[4]);
	printf("---------------------------\n");
   
	for (i = 0; i < 5; i++)
	{
		for ( j = 0 ; j < 4 - i; j++)
		{
			if (strcmp(str[j], str[j + 1]) > 0)
			{
				strcpy(stra, str[j]);
				strcpy(str[j], str[j + 1]);
				strcpy(str[j + 1], stra);
			   
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%s\n", str[i]);
	}

	return 0;
}