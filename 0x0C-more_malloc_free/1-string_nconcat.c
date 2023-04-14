#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <stdio.h>
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
	unsigned int ln1, ln2, result_len;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	ln1 = strlen(s1);
	ln2 = strlen(s2)

		if (n >= ln2)
		{
			n = ln2;
		}

	result = malloc(result_len * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	memcpy(result, s1, ln1);

	memcpy(result + ln1, s2, n);

	result[result_len - 1] = '\0';

	return (result);
}

