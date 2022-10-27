#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - counts no of unique nodes
 * in a looped listint_t linked list
 * @head: pointer
 * Return: the no of unique nodes in the list else 0
 */

size_t looped_listint_count(listint_ *head)
{
	listint_t *tor, *here;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tor = head->next;
	here = (head->next)->next;
	while (here)
	{
		if  (tor == here)
		{
			tor = head;
			while (tor != here)
			{
				nodes++;
				tor = tor->next;
				here = here->next;
			}
			tor = tor->next;
			while (tor != here)
			{
				node++;
				tor = tor->next;
			}
			return (nodes);
		}
		tor = tor->next;
		here = (here->next)->next;
	}
	return (0);
}

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the address of the head of the list
 * Return: size of the list that was freed.
 * Description: the function sets the head to null
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;

	size_t nodes, index;

	nodes = looped_listint_count(*h);
	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		*h = NULL;
	}
	h = NULL;
	return (nodes);
}
