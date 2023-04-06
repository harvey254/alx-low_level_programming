#include "main.h"
/**
 *_print_rev_recursion - prints a string in reverse
 *@s: string value
 *Return: no value
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		print_rev_recursion(s + 1);

		_putchar(*s);
	}
}

