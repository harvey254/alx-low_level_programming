#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to integer value
 * @index:index starting from 0
 * Return: Success (1), -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1UL << index);

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= mask;
	return (1);
}
