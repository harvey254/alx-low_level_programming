#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: integer byte value
 * Return: no value
 */

void *malloc_checked(unsigned int b)
{
	void *c = malloc(b);

	if (c == NULL)
		exit(98);

	return (c);
}

