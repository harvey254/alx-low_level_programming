#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
 * listint_len -> returns number of elements
 * @h: singly linked list
 *
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;

	return (i);
}

