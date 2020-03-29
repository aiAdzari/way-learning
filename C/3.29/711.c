#include<stdio.h>

int main(void)
{
    float r, h, c, s, v;
    printf("Input: ");
    scanf("r=%f,h=%f", &r, &h);
    c = 2 * 3.14 * r ;
    s = 3.14 * r * r ;
    v = s * h ;
    printf("\nC1=%.2f\nS=%.2f\nV=%.2f", c, s, v);

    return 0;

}