#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer value
 * @index: index starting from 0
 * Return: value of bit at index, -1 otherwise
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((n & mask) ? 1 : 0);
}
