#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to a memory area
 * @b: constant byte
 * @n: bytes of memory area
 * Return: pointer to the memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
