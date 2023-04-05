#include "main.h"
/**
 * _sqrt_recursion - 
 * @n: integer value
 * Return : square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	int i;

	for (i = 1; i * i <= n; i++)
	{
		if (i * i == n)
		{
			return (i);
		}
	}
}
