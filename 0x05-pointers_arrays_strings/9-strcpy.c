#include "main.h"
/**
 * _strcpy - copies string pointed by src including \0
 * @dest: buffer
 * @src: string value
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src;
	}
	*dest = '\0';

	return (dest_start);
}
