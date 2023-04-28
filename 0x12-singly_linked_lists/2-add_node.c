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
	char *content;

	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);

	len = _strlen(str);
	new = *head;
	content = malloc((len + 1) * sizeof(char));

	if (content == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		content[i] = str[i];
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(content);
		return (NULL);
	}
	new->str = content;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
