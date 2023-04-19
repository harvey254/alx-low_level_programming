#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: an array of integers
 * @size: number of elements in the array
 * @cmp: pointer to function
 * Return: index of first element that matches with `cmp`, -1 if none matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
