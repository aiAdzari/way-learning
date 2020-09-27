#include <stdio.h>

int main(void)
{
	long int money, time;
	double lixi;

	printf("Please input benjin,cunqi: ");
	scanf("%d,%d", &money, &time);
	switch (time)
	{
		case 1:
			lixi = money * 1.0315;
			break;
		case 2:
			lixi = money * 0.0363 * 2.0 ;
			break;
		case 3:
			lixi = money * 0.0402 * 3.0 ;
			break;
		case 5:
			lixi = money * 0.0469 * 5.0 ;
			break;
		case 8:
			lixi = money * 0.0536 * 8.0 ;
			break;    
		default:
			printf("Your must input cunqi only 1, 3, 5, 8");
			break;
	}
	printf("\nlixi = %.2lf yuan", lixi);

	return 0;


}