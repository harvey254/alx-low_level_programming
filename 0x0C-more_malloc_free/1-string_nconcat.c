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
	unsigned int i, j, ln1, ln2;

	while (s1 && s1[ln1])
		ln1++;

	while (s2 && s2[ln2])
		ln2++;
	if (n < ln2)
		s = malloc(sizeof(char) * (ln1 + n + 1));
	else
		s = malloc(sizeof(char) * (ln2 + ln1 + 1));

	if (!s)
		return (NULL);

	while(i < ln1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < ln2 && i < (ln1 + n))
		s[i++] = s2[j++];

	while (n >= ln2 && i < (ln1 + ln2))
		s[i++] = s2[j++];
	s[i] = '\0'

		return (s);
}

