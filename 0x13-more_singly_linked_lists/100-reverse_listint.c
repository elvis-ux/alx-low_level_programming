#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list
 * @head: pointer to the first node head
 *
 * Return: a pointer to the first node of thr reverse list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *h, *b;

	if (head == NULL || *head == NULL)
		return (NULL);
	b = NULL;
	while ((*head)->next != NULL)
	{
		h = (*head)->next;
		(*head)->next = b;
		b = *head;
		*head = h;
	}
	(*head)->next = behind;

	return (*head);
}
