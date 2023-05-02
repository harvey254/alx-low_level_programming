#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint -> sums up all the data
 * @head: pointer to first element of the list
 *
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	sum = 0;
	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
