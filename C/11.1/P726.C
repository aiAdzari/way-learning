#include <stdio.h>
#include <stdlib.h>

int main()
{
	int tem,i;
	char arr[101];

	printf("input a string: ");
	for(i=0;i<100;i++)
	{
		if((tem = getchar()) != '\n' && tem != EOF)
		{
			arr[i] = tem;
		}
		else
		{
			break;
		}
		
	}
	arr[i] = '\0';

	printf("\nThe string lenth is: %d",i);
	printf("\nThe string is: %s\n", arr);

	return 0;
}