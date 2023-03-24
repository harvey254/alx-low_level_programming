#include "main.h"
/**
 * print_line - draws a straight line
 * @n: number of times _ is printed
 * Return: no value
 */
void print_line(int n)
{
	for (int i= 0; i < n; i++)

	{
		if ( n <= 0)
		{
		_putchar('\n');

		break;
		}
		else
		{
			_putchar('_');
		}
		_putchar('_');
	}
}

