#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _realloc - reallocates memory block
 * @ptr: pointer to memory previously allocated
 * @old_size: size in bytes for pointer
 * @new_size: size of the new memory block
 * Return: reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);

		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	if (new_size < old_size)
	{
		memcpy(new_ptr, ptr, new_size);
	}

	else
	{
		memcpy(new_ptr, ptr, old_size);
	}

	free(ptr);

	return (new_ptr);
}

