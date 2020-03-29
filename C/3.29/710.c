#include<stdio.h>

int main(void)
{
    char s, l;
    printf("Input a lowercase letter: ");
    s = getchar();
    l = s - 32;
    printf("\n%c(%d)\n%c(%d)", s, s, l, l);

    return 0;


}