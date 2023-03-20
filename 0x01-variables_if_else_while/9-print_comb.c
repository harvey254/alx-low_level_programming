#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * prints all possible combinations of single-digit numbers 
 * Return: 0 Always (Success)
 */

int main(void)
{
int i, j, k, l;
for(i = 0; i < 10; i++)
{
putchar('0' +i);
putchar(',');
putchar(' ');
}
for(j = 0; j < 10; j++)
{
putchar('0' +i);
putchar('0' +j);
putchar(',');
putchar(' ');
}
for(k = 0; k < 10; k++)
{
putchar('0' +i);
putchar('0' +j);
putchar('0' +k);
putchar(',');
putchar(' ');
}
for(l = 0; l < 10; l++)
{
putchar('0' +i);
putchar('0' +j);
putchar('0' +k);
putchar('0' +l);
putchar(',');
putchar(' ');
}

return (0);
}

