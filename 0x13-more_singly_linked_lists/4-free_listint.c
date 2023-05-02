#include "lists.h"
#include <stdlib.h>
/**
  * free_listint - frees singly linked list
  * @head: pointer to first element of the list
  */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);

	free(head);
}
