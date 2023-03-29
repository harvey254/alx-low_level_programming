#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string value
 * @src: string value
 * Return: concatenated string value
 */
char  *_strcat(char *dest, char *src)
{
	char *ptr = dest + strlen(dest);

	while (*src != '0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (dest);
}

