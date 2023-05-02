#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * insert_nodeint_at_index -> inserts a new node at a given position
 * @head: double pointer to the first element of the list
 * @idx: index of the list
 * @n:
 *
 * Return: address of new node, NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new_node;

	current = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = current;
		*head = new_node;
		return (*head);
	}
	while (idx > 1)
	{
		current = current->next;
		idx--;
		if (current != NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
