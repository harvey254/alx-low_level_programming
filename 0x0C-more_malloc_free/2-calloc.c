#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: integer value of bytes
 * Return: returns pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;
	ptr = (int *)malloc(total_size)

		if (ptr == NULL)
		{
			return (NULL);
		}

	memset(ptr, 0, total_size);

	return (ptr);

}

