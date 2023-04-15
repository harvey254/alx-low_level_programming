#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - cocatenates strings
 * @s1: string value
 * @s2: string value
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, k;
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[k] != '\0')
		k++;

	concatenated = malloc(sizeof(char) * (i + k + 1));

	if (concatenated == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		concatenated[i] = s1[i];
		i++;

	}

	while (s2[k] != '\0')
	{
		concatenated[k] = s2[k];
		i++, k++;

	}

	concatenated[i] = '\0';

	return (concatenated);
}

