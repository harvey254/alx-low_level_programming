#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to string value
 * @c: constant string value
 * Return: pointer to the memory s
 */
char *_strchr(char *s, char c)
{
        while (*s != '\0')
	{
		if (*s == c)
		{
			return s;
		}

		s++;
	}

	return (NULL);
}

