#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
  * add_node - adds a new node at the beginning
  * of a list
  * @head: current place in the list
  * @str: string to add to the head
  * Return: pointer to current position in list, 
  * NULL if it fails
  */
list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *element;

	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);

	len = strlen(str);
	new = *head;
	element = malloc((len + 1) * sizeof(char));

	if (element == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		element[i] = str[i];
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(element);
		return (NULL);
	}
	new->str = element;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
