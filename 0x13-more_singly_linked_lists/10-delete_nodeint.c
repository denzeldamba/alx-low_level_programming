#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of listint_t linked list
 * @head: Double pointer to the head of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int count = 0;


	if (*head == NULL)
		return (-1);
	/* Special case: Delete the head node */
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	current = *head;
	/* Tranverse the list ot find the node at the (index - 1 position */
	while (current != NULL && count < index - 1)
	{
		current = current->next;
		count++;
	}
	/* if current is NULL or count<(index -1), the inde is out of range*/
	if (current == NULL || count < index - 1)
		return (-1);
	/* Update the pointer to skip the node to be deleted */
	temp = current->next;
	current->next = temp->next;
	/* Free the memory of the node to be deleted */
	free(temp);
	return (1);
}
