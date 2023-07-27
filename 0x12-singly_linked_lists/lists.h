#ifndef LIST_H
#define LIST_H

#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: String - (malloc'ed string)
 * @lenL Length of the string
 * @next: Pointd to the next node
 *
 * Description: Singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}list_t;

void free_list(list_t *head);
list_t *add_node_end(list_t **head, const char *str);
list_t *add_node(list_t **head, const char *str);
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);

#endif /* LIST_H */
