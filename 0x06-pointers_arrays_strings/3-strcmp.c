#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string value
 * @s2: string value
 * Return: comparison of string values
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] == s2[i])
	{

		if (s1[i] == '\0')
		{

			return (0);
		}

		i++;
	}

	return (s1[i] - s2[i]);
}
