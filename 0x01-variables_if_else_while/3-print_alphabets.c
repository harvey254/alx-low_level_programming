#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * prints the alphabet in lowercase, then in uppercase followed by a new line
 * Return: 0 Always (Success)
 */

int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}

letter = 'A';

while (letter <= 'Z')
{
putchar(letter);
letter++;
}
putchar('\n');

return (0);
}

