#include "dog.h"
#include <stdio.h>
#include <stlib.h>
#include <string.h>
/**
 * free_dog - frees dogs
 * @d: struct dog
 * Return: no value
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
