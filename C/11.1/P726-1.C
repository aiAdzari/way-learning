#include <stdio.h>
#include <conio.h>

int main(void)
{
	char arr[101];
	int i = 0, lenth = 0;

	printf("input a string: ");
	while ((arr[i] = getche()) != '\n' && i < 101)
	{
		i++;
	}
	if (i < 100)
	{
		arr[i] = '\0';
	}
	else
	{
		arr[101] = '\0';
	}
	
	/*for ( i = 0; i < 101; i++)
	{
		arr[i] = getche();
		if (arr[i] == '\n' && i < 100)
		{
			arr[i] = '\0';
			break;
		}
		else if (i == 100)
		{
			arr[i] = '\0';
			break;
		}
		
	}*/
	for ( i = 0; i <= 100; i++)
	{
		if (arr[i] != '\0')
		{
			lenth++;
		}
		else
		{
			break;
		}
		
		
	}
	
	
	printf("\nThe string lenth is: %d", lenth);
	printf("\nThe string is: %s", arr);
	
	return 0;
}