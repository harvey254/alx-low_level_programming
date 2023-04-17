#include "dog.h"
#include <stlib.h>
/**
 * free_dog - frees dogs
 * @d: struct dog
 * Return: no value
 */
void free_dog(dog_t *d)
{
	dog_t *dog = (dog_t *) malloc(sizeof(dog_t));
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
	}

}
