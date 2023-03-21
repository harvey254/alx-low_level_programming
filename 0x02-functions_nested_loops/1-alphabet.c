
#include "main.h"
/**
 * main - Entry point
 * prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
}
int main(void)
{
print_alphabet();
return (0);
}
