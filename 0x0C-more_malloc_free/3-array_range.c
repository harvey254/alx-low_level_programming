#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum integer value
 * @max: maximum integer value
 * Return: returns an array of integers
 */

int *array_range(int min, int max)
{
	int *array;
	int size, i;

	size = max - min + 1;
	array = malloc(size * sizeof(int));

	if (min > max)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}

	return (array);
}

