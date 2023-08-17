#include <stdio.h>
#include <math.h>

int main(void)
{
    unsigned long long int num = 612852475143;
    unsigned long long int largest_prime = 2;

    while (num > largest_prime)
    {
        if (num % largest_prime == 0)
        {
            num /= largest_prime;
        }
        else
        {
            largest_prime++;
        }
    }

    printf("%llu\n", largest_prime);

    return 0;
}
