#include "function_pointers.h"
/**
 * array_iterator - executes a fnc given as a parameter
 * on each element of an array
 * @array: pointer to array
 * @size: size of the array
 * @action: pointer to function
 * 
 * Return: no value
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	for (i = 0; i < size; i++)
		action(array[i]);
}
