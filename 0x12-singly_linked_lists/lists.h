#ifndef _LISTS_H
#define _LISTS_H

#include <stddef.h>

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);


/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @ln: length of the string
 * @next: points to the next node
 */
typedef struct list
{
	char *str;
	unsigned int ln;
	struct list *next;
} list_t;

#endif