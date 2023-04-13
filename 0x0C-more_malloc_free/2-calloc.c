#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: integer value of bytes
 * Return: no value
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	total_size = nmemb * size;
	ptr = malloc(total_size)

		if (nmemb == 0 || size == 0)
		{
			return (NULL);
		}

		else if (ptr == NULL)
		{
			return (NULL);
		}

		else
		{
			memset(ptr, 0, total_size);

			return (ptr);
		}
}

