#include <stdio.h>

int main(void)
{
    char rec;
    printf("Input a lowercase letter:");
    scanf("%c", &rec);
    printf("\n%c(%d)\n%c(%d)", rec, rec, rec - 32, rec - 32);

    return 0;

}