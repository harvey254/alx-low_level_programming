#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string value
 * Return: returns pointer to a newly space, NULL is str = NULL
 */

char *_strdup(char *str)
{
	char *duplicate = malloc(strlen(str) + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);

	return (duplicate);
}
