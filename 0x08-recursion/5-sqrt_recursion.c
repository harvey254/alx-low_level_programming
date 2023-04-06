#include "main.h"
/**
 * _sqrt_recursion - calculates square root
 * @n: integer value
 * Return : square root
 */

int _sqrt_helper(int n, int l, int h)
{
	if (l > h)
	{
		return (-1);
	}

	int avg = (l + h) / 2;
	int sq = avg * avg;

	if (sq == n)
	{
		return (avg);
	}	

	else if (sq < n)
	{
		return (_sqrt_helper(n, avg + 1, h));
	}	

	else
	{
		return (_sqrt_helper(n, l, avg - 1));
	}
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_helper(n, 0, n));
}

