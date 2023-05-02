#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
  * add_nodeint - adds a new node at the beginning
  * @head: double pointer that points to the first element
  * @n: int to add to the list
  * Return: address of new element, NULL if it fails
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
