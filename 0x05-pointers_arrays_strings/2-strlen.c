#include "main.h"
/**
 * _strlen - returns lenght of string
 * @s: string value
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
