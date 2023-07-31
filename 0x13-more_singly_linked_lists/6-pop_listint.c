#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of listint_t linked list
 * @head: Double pointer to the head of the list
 *
 * Return: The head nodes's data(n) or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (data);
}
