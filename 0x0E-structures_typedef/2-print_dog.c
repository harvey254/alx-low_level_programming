#include "dog.h"
#include <stdio.h>
#include <string.h>
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
		if (!(d))
			return;

		if (!(d->name))
			d->name = "(nil)";
		if(!(d->owner))
			d->owner = "(nil)";

		printf("Name:%s\nAge:%f\nOwner:%s\n", d->name, d->age, d->owner);
	}
}
