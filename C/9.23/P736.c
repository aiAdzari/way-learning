#include <stdio.h>

int main(void)
{
    int num1, sum;
    printf("Input a number with 4-digit:");
    scanf("%d", &num1);
    sum = num1 / 1000 + ( num1 % 1000 ) / 100 + ( num1 % 100 ) / 10 + num1 % 10 ;
    printf("\nsum=%d\n", sum);

    return 0;
}