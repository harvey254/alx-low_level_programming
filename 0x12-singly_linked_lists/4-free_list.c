#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * free_list - frees a linked list
  * @head: pointer that points to the first element on the list
  *
  * Return: no value
  */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free(head->next);
	free(head);
}
