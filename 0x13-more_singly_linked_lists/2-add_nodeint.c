#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: A pointer to the headt pointer of the list
 * @n: The integer for the new node to contain
 *
 * Return: the address of the new elememt, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	/* Set the value for the new node */
	new->n = n;
	/* Update next pointer of the new node to point to the current head */
	new->next = *head;
	/* Update the head to point to the new node */
	*head = new;

	return (new);
}
