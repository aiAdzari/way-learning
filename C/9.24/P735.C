#include <stdio.h>
#include <math.h>

int main(void)
{
    int len;
    double PPP;

    printf("Input a side of triangle: ");
    scanf("%d", &len);
    PPP = len * 1.5;
    printf("\nThe area of triangle is %.2lf, the circle of triangle is %d.", 
    sqrt( PPP * (PPP - len) * (PPP - len) * (PPP - len)), len * 3);

    return 0;

}