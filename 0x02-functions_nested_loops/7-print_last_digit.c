#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @i: input integer
 * Return: value of last digit
 */

int print_last_digit(int i)
{
int num;
num = i % 10;
if (num < 0)
{
_putchar(-num + 48);
return (-num);
}
else
{
_putchar(num + 48);
return (num);
}

}


