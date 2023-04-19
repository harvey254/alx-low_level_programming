#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns sum
 * @a: integer value
 * @b: integer value
 * Return: sum of 2 integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference
 * @a: integer value
 * @b: integer value
 * Return: difference of 2 numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of 2 numbers
 * @a: integer value
 * @b: integer value
 * Return: product of the numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of 2 numbers
 * @a: integer value
 * @b: integer value
 * Return: result of the division of the numbers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns  remainder of the division of 2 numbers
 * @a: integer value
 * @b: integer value
 * Return: remainder of division of the numbers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
