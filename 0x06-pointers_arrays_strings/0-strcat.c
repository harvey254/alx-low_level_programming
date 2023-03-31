#include "main.h"
#include <string.h>

/**
 * *_strcat - See description
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */

char *_strcat(char *dest, char *src)
{
	size_t dest_len = strlen(dest);

       	size_t i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{

		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
