#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * prints the alphabet in lowercase
 * Return: 0 Always (Success)
 */
void lowercase(void)
{
for (int c = 97; c <= 122; ++c)
putchar(c);
}
int main(void)
{
lowercase(void);

return (0);
}

