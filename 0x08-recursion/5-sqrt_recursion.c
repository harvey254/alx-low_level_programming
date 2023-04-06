#include "main.h"
/**
 * _sqrt_recursion - calculates square root
 * @n: integer value
 * Return: returns natural square root, otherwise it returns -1
 */

int  _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (0);
	}

	else
	{
		int i = _sqrt_recursion(n - 1) + 1;

		if (i * i > n)
		{
			return (i - 1);
		}

		else
		{
			return (i);
		}
	}
}

