#include "dog.h"
#include <stlib.h>
#include <stdio.h>
/**
 * free_dog - frees dogs
 * @d: struct dog
 * Return: no value
 */
void free_dog(dog_t *d)
{
	free(d);
}
