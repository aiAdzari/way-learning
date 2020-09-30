#include <stdio.h>

int main(void)
{
	int data1, data2;
	char op;

	printf("Please input data1 op data2: ");
	scanf("%d %c %d", &data1, &op, &data2);
	if (op == '%' || op == '/')
	{
		if (data2 == 0)
		{
			printf("\nError! chu shu wei 0.\n");
		}
		else
		{
			switch (op)
			{
				case '%':
					printf("%d%%%d=%d", data1, data2, data1 % data2); 
					break;
				case '/':
					printf("%d/%d=%f", data1, data2, (data1 / (float)data2));
				default:
					break;
			}
		}
	}
	else 
	{
		switch (op)
		{
			case '+':
				printf("%d+%d=%lf", data1, data2, (data1 + (double)data2));
				break;
			case '-':
				printf("%d-%d=%lf", data1, data2, (data1 - (double)data2));
				break;
			case '*':
				printf("%d*%d=%lf", data1, data2, (data1 * (double)data2));
				break;
			default:
				break;
		}
	}
	
	return 0;
	
}