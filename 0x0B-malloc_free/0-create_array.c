#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: number of bytes
 * @c: char value
 * Return: returns a pointer to the array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}

