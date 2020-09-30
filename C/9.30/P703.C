#include <stdio.h>

int main(void)
{
    int profit;
    
    printf("Input  profit: ");
    scanf("%d", &profit);
    if (profit > 1000)
    {
        if (profit <= 5000)
        {
            if (profit <= 2000)
            {
                printf("\nsalary=%.2f\n", 500 + profit * 0.1);
            }
            else
            {
                printf("\nsalary=%.2f\n", 500 + profit * 0.15);
            }           
        }
        else
        {
            if (profit <= 10000)
            {
                printf("\nsalary=%.2f\n", 500 + profit * 0.2);
            }
            else
            {
                printf("\nsalary=%.2f\n", 500 + profit * 0.25);
            }            
        }        
    }
    else
    {
        printf("\nsalary=500.00\n");
    }

    return 0;
    
}