#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * prints the alphabet in lowercase
 * Return: 0 Always (Success)
 */

int main(void)
{
char letter = "a";
while(letter <= "z")
{
putchar(letter);
letter++;
}
putchar("\n");

return (0);
}

