#include "main.h"
/**
 *_print_rev_recursion - prints a string in reverse
 *@s: string value
 *Return: no value
 */
void _print_rev_recursion(char *s)
{
	int i;
	char temp = *s;

	s[i] = s[i - 1];
	s[i - 1] = temp;

	if (*s == '\0')
	{
		_putchar('\n');

		return;

	}

	_print_rev_recursion(s + 1);

	_putchar(*s);
}

