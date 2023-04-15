#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: string value
 * Return: returns pointer to a newly space, NULL is str = NULL
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i, k = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (str[i] != '\0')

		i++;

	duplicate = malloc(sizeof(char) * (i + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (k = 0; str[k]; k++)

		duplicate[k] = str[k];

	return (duplicate);
}

