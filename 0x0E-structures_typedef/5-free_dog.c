#include "dog.h"
#include <stdio.h>
#include <stlib.h>
/**
 * free_dog - frees dogs
 * @d: struct dog
 * Return: no value
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
