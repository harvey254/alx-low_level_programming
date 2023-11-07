#include "main.h"
/**
 * print_binary - prints binary representation of a no
 * @n: integer value
 * Return: no value
 */


void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
