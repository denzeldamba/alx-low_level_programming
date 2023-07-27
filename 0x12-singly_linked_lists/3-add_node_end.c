#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end do a list_t list.
 * @head: A pointer to the head pointer of the list_t list.
 * @str: the string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 * Otherwise - The address of the node new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last = *head;

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new_node;

	return (new_node);
}
