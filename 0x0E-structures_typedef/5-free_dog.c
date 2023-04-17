#include "dog.h"
#include <stlib.h>
/**
 * free_dog - frees dogs
 * @d: struct dog
 * Return: no value
 */
void free_dog(dog_t *d)
{
	if (d->name)
		free(d->name);

	if (d->owner)
		free(d->owner);

	free(d);

}
