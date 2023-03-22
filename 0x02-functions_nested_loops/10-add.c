#include "main.h"

/**
 * add - adds two integers
 * @i: input integer
 * @n: input integer
 * Return: summation of two integers
 */

int add(int i, int n)
{
int res;
res = i + n;
if (res < 0)
{
_putchar(-res + 48);
return (-res);
}
else
{
_putchar(res + 48);
return (res);
}

}
