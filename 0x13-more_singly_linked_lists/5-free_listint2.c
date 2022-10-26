#include "lists.h"

/**
 * free_listint2 - frees a listint_t
 * @head: pointer to first node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (!head)
		return (NULL);
	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
}
