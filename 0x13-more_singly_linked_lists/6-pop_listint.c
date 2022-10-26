#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: pointer
 * Return: head note if successful
 */

int pop_listint(listint_t **head)
{
	int nnode;

	listint_t *temp;

	if (*head == NULL)
		return (0);
	nnode = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (nnode);
}

