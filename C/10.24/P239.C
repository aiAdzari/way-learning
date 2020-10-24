#include <stdio.h>

int main(void)
{
	int arr[16], i, n = 0, tep;

	printf("请输入若干个数: ");
	for ( i = 0; i < 16; i++)
	{
		scanf("%d", &tep);
		if (tep != -1)
		{
			arr[i] = tep;
			n++;
		}
		else
		{
			break;
		}      
	}
	printf("\n这些数倒序为: ");
	for ( i = n - 1; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}

	return 0;  
}