#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * prints all single digit numbers of base 10 starting 0
 * Return: 0 Always (Success)
 */

int main(void)
{
for (i=0; i < 10; i++)
{
putchar('0' + i);
}
putchar('\n');
return (0);
}

