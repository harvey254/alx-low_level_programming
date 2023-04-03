#include "main.h"
/**
 * _strpbrk - searches for a string for any set of bytes
 * @s: pointer to a string value
 * @accept: string value
 * Return: pointer to the memory s
 */
char *_strpbrk(char *s, char *accept)
{
        unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] !=m '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}

		s++;

	}

	return (NULL);
}

