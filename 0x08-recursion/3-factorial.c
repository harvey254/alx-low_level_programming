#include "main.h"
/**
 *factorial - prints a string in reverse
 *@n: integer value
 *Return: factorial
 */
int factorial(int n)
{
        if (n < 0)
        {
		return (-1);
        }

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1);
}
