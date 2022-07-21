#include <stdio.h>

int main()
{
    int primes[100];
    int i, j, k;
    k = 0;
    _Bool isPrime = 1;
    for (i = 3; i < 101; i++)
    {
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                isPrime = 0;
            }
        }
        if (isPrime)
        {
            primes[k] = i;
            k++;
        }
        isPrime = 1;
    }

    printf("The primes from 3 to 100 are: ");
    for(i = 0; i < k; i++)
    {
        if(i != k - 1)
            printf("%d, ", primes[i]);
        else
            printf("and %d.", primes[i]);
    }

    printf("\n");

    return 0;
}
