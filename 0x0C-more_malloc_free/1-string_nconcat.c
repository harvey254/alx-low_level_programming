#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: string value
 * @s2: string value
 * @n: integer value of number of bytes
 * Return: concatenated string value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int ln1, ln2, copyln;

	ln1 = strlen(s1);
	ln2 = strlen(s2);
	copylen = (len2 < n) ? len2 : n;
	result = malloc(len1 + copylen + 1);

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	if (result == NULL)
	{
		return (NULL);
	}

	memcpy(result, s1, len1);

	memcpy(result + len1, s2, copylen);

	result[len1 + copylen] = '\0';

	return (result);
}

