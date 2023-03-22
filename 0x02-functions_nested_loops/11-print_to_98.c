#include "main.h"
/**
 * print_to_98 - prints natural numbers
 * @n: input integer
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
for (n = 0; n <= 98; n++)
{
_putchar('0' + n);
_putchar(',');
_putchar(' ');
}
}
