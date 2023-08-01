#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given positon.
 * @head: Double pointer to the head of the list
 * @idx: Index of the list where node should be added
 * @n: The data value of the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current = *head;
	unsigned int count = 0;

	/* if the index is 0, add the new node at the beginning */
	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	/* Transverse the list to find the node at the (idx -1) positon */
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	/* If current is NULL/count<(idx - 1), the index is out of range*/
	if (current == NULL || count < idx - 1)
		return (NULL);
	/* Create the new node and inser it between current and current->next*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
