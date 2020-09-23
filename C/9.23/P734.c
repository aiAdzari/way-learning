#include <stdio.h>

int main(void)
{
    int len;
    printf("Input a side of cube:");
    scanf("%d", &len);
    printf("\nThe volume of cube is %d, the surface area of cube is %d", len * len * len, len *len * 6);

    return 0;
}