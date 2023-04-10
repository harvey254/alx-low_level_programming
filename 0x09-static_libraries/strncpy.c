#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: string value
 * @src: string value
 * @n : number of bytes
 * Return: concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{

		*dest = '\0';
		dest++;
		n--;
	}

	return (result);
}

