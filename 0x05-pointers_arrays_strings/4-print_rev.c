#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string value
 * Return: no value
 */
void print_rev(char *s)
{
	int len = strlen(s);
	for (int i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
