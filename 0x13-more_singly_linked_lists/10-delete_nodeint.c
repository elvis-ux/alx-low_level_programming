#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes a node at a given position.
 * @head: pointer to first node
 * @index: index to delete
 * Return: 1 if it successful
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curt;
	listint_t *temp;

	if (head == NULL || (*head) == NULL)
		return (-1);
	curt = *head;
	if (index == 0)
	{
		if ((*head)->next)
			(*head) = (*head)->next;
		else
			(*head) = NULL;
		free(curt);
		return (1);
	}
	while (index != 1)
	{
		if (curt->next == NULL)
			return (-1);
		curt = curt->next;
		--index;
	}
	temp = curt->next;
	if (curt->next->next)
		curt->next = curt->next->next;
	else
		curt->next = NULL;
	free(temp);

	return (1);
}
