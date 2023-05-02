#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * pop_listint -> deletes the head node os the list
 * and returns the head nodes data
 * @head: double pointer that points to the first element
 *
 * Return: head nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node_data;

	if (*head == NULL)
		return 0;

	temp = *head;
	node_data = temp->n;
	*head = temp->next;

	free(temp);

	return (node_data);
}
