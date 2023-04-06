#include "main.h"
/**
 * _sqrt_recursion - 
 * @n: integer value
 * Return : square root
 */
int is_prime_numben(int n)
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

	return (is_prime_number(n);
}

