#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stlib.h>
/**
 * print_dog - prints struct dog
 * @d:struct dog
 *
 * Return: no value
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)\n"));

		printf("Age: %f\n", d->age);

		d->owner ? (printf("Owner: %s\n", d->owner)) : (printf("Owner: (nil)\n"));
	
	}
}
