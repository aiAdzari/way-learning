#include <stdio.h>

int main(void)
{
    float F,C;
    printf("Input the degree: ");
    scanf("%f",&F);
    C = 5 * (F-32) / 9;
    printf("\nF(%.2f)=C(%.2f)", F, C);

    return 0;

}