#include "main.h"
/**
 * print_line - draw a straight line
 * @n: number of times _ is printed
 * Return: no value
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
for (int i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}

