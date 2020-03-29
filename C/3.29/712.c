#include<stdio.h>

int main(void)
{
    int num, a, b;
    printf("Please input an integer: ");
    scanf("%d", &num);
    if(num % 5 == 0 && num % 7 == 0)
    {
        printf("\nYes.");
    }
    else
    {
        printf("\nNo.");
    }
    
     /*
    a = num % 5;
    b = num % 7;
    if(a==0)
    {
        if (b==0)
            printf("\nYes");
        else
            printf("\nNo");
    }
    else
        printf("\nNo");
    */

    return 0;

}