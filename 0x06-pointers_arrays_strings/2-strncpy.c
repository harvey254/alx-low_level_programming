#include "main.h"
/**
 * _strncat - copies a string
 * @dest: string value
 * @src: string value
 * @n : number of bytes
 * @i: integer value
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
        char* dest_start = dest;

	while (n > 0 && *src != '\0')
	{
		*dest++ = *src++;
		n--;
	}

	while (n > 0)
	{


		*dest++ = '\0';
	}


	return (dest_start);

