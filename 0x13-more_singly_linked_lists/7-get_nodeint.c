#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index -> prints the nth node of the list
 * @head: pointer to the first element of the list
 * @index: index of the node
 *
 * Return: nt node of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	current = head;

	for (i = 0; current != NULL; i++)
		current = current->next;
	if (i == index && current != NULL)
		return (current);
	else
		return (NULL);
}
