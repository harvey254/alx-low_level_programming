#include "lists.h"
#include <stdlib.h>
/**
  * free_listint2 - Frees a list and sets its head to NULL
  * @head: double pointer that points to the first element
  *
  * Return: no value
  */
void free_listint2(listint_t **head)
{
	listint_t *mp, *current;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		mp = current;
		current = current->next;
		free(mp);
	}
	*head = NULL;
}
