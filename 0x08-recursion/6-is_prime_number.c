#include <stdio.h>
#include <math.h>

int is_prime_number(int n);

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1; // 2 is the only even prime number
    if (n % 2 == 0)
        return 0; // other even numbers are not primes

    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
