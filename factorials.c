#include <stdio.h>

int main()
{
    // variables
    int factorial_value = 0;
    int idx = 0;
    int factorial_product = 1;

    // greeting
    do
    {
        printf("Enter the number you want to find the factorial of,\
 it must be greater than 1: ");
        scanf("%d", &factorial_value);

        if (factorial_value <= 1) 
            printf("\nListen wiseguy, enter a value greater than 1.\n");
    } while (factorial_value <= 1);

    for (idx = factorial_value; idx > 0; idx--)
        factorial_product *= idx;

    printf("\nThe factorial product is %d.\n", factorial_product);
    return 0;
    
}
