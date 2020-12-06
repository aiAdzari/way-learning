#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i, j, k;

	if (argc != 4)
	{
		printf("    error, usage: P792  str1 str2 str3\n");
		exit(1);
	}
	else
	{
		if (strcmp(argv[1], argv[2]) > 0)
	{
		k = 1;
	}
	else
	{
		k = 2;
	}
	if (strcmp(argv[k], argv[3]) < 0)
	{
		k = 3;
		if (strcmp(argv[1], argv[2]) > 0)
		{
			j = 1;
			i = 2;
		}
		else
		{
			j = 2;
			i = 1;
		}	
	}
	else
	{
		if (k == 1)
		{
			if (strcmp(argv[2], argv[3]) > 0)
			{
				j = 2;
				i = 3;
			}
			else
			{
				j = 3;
				i = 2;
			}	
		}
		else
		{
			if (strcmp(argv[1], argv[3]) > 0)
			{
				j = 1;
				i = 3;
			}
			else
			{
				j = 3;
				i = 1;
			}	
		}
		
	}

	printf("    output: %s   %s   %s\n", argv[i], argv[j], argv[k]);
	}
	
	return 0;
	
}