#include "main.h"
/**
 *is_prime_number - checks whether a number is prime
 *@n: integer value
 *Return: 1 if prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
	{
		return (0);
	}

	if (i * i > n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (1 + is_prime_number(n));
}

