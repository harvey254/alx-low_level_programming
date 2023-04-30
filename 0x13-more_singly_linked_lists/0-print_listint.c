#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * print_listint -> prints all the elements of a list
 * @h: singly linked lists
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;
	for (count = 0; h; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
