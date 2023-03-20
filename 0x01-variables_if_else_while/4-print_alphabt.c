#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * prints the alphabet in lowercase except q and e
 * Return: 0 Always (Success)
 */

int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter !='e' && letter !='q')
{
putchar(letter);
}

letter++;

putchar('\n');

return (0);
}

