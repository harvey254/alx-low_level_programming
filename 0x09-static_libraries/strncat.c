#include "main.h"
#include <string.h>

/**
 * _strncat - See description
 * @dest: char type string
 * @src: char type string
 * @n: number of bytes
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*dest != '\0')

	{

		dest++;

	}

	while (*src != '\0' && n > 0)

	{

		*dest = *src;

		dest++;

		src++;

		n--;

	}


	*dest = '\0';

	return (p);
}
