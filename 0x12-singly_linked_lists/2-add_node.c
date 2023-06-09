#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
  * add_node - adds a new node at the beginning
  * of a list
  * @head: pointer pointing to the first element
  * @str: string value to add to the head
  * Return: pointer to current position in list,
  * NULL if it fails
  */
list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node = malloc(sizeof(list_t));

	if (str == NULL || head == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;


	return (new_node);
}
