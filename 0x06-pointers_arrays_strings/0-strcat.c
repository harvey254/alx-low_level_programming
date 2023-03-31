#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string values
 * @src: string value
 * Return: concatenated string value
 */
char  *_strcat(char *dest, char *src)
{
	int i, len = 0;

	while (dest[len] != '\0')

	{
		len++;

	}
	for (i = 0; src[i] != '\0'; i++, len++)
	{

		dest[len++] = src[i];

	}

	dest[len] = '\0';

	return (dest);
}

