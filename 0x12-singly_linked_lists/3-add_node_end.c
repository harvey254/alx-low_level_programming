#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adds a new node at the end of the list
 * @head: pointer to first element on the list
 * @str: string value
 *
 * Return: no value
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
	char *dup_str;

	if (str == NULL)
		return (NULL);
	dup_str = strdup(str);
	if (dup_str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = dupstr;
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
	return (new_node);
