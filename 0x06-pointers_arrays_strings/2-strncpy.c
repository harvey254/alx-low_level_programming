#include "main.h"
/**
 * _strncat - copies a string
 * @dest: string value
 * @src: string value
 * @n : number of bytes
 * @i: integer value
 * Return: concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr;

	ptr = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (ptr);
}
