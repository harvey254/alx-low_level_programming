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
		if (d == NULL)
			return;
		if (d->name == NULL)
			printf("Name:(nil)\n");
		else
			printf("Name:%s\n", d->name);

		printf("Age:%f\n", d->age);

		if (d->owner == NULL)
			printf("Owner:(nil)\n");
		else
			printf("Owner:%s\n", d->owner);
	}
}
