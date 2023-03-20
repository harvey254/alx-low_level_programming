#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * prints all possible combinations of single-digit numbers
 * Return: 0 Always (Success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar((i % 10) + '0');
if (i == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}

