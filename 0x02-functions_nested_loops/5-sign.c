#include "main.h"
/**
 *print_sign - prints + if n is greater than zero, 0 if n is zero and - if n is less than zero
 * Return: 1 if n is greater than 0, 0 if n is zero and -1 if n is less than zero
 */

int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}

