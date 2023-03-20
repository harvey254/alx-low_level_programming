#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * prints all possible combinations of two digits
 * Return: 0 Always (Success)
 */
int main(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
if (i != 0 || j != 1)
{
putchar(i + '0');
putchar(j + '0');
putchar((i % 10) + '0');
if (i < 8 || j < 9)
{
putchar(',');
putchar(' ');
}
}
}
}
return (0);
}

