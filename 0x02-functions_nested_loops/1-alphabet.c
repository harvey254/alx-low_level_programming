#include <stdio.h>
/**
 * main - Entry point
 * prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
}

int main(void)
{
print_alphabet();
return (0);
}
