#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of listint_t linked list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node to return.
 *
 * Return: Pointer to the node, or NULL if does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;
	listint_t *current = head;

	for (node = 0; node < index; node++)
	{
		if (current == NULL)
			return (NULL);

		current = current->next;
	}
		return (current);
}
