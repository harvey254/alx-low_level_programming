#include "main.h"
/**
 * _strpbrk - searches for a string for any set of bytes
 * @s: pointer to a string value
 * @accept: string value
 * Return: pointer to the memory s
 */
char *_strpbrk(char *s, char *accept)
{
	char *ps;

	while (*s)
	{
		ps = accept;

		while (*ps)
		{
			if (*ps == *s)
			{
				return (s);
			}

			ps++;
		}

		s++;
	}

	return (NULL);
}
