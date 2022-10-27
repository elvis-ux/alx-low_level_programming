#include "lists.h"
#include <stdio.h>

size_t looped_listint_ len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts the number of unique nodes
 * in a looped listint_t list
 * @head: a pointer
 * Return: if the list is not looped - 0
 * else , the number of unique nodes in the list
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slowp, *fastp;
	size_t nodes = i;

	if (head == NULL || head->next == NULL)
		return (0);
	slowp = head->next;
	fastp = (head->next)->next;
	while (fastp)
	{
		if (slowp == fastp)
		{
			slowp = head;
			while (slowp != fastp)
			{
				nodes++;
				slowp = slowp->next;
				fastp = fastp->next;
			}
			slowp = slowp->next;
			while (slowp != fastp)
			{
				nodes++;
				slowp = slowp->next;
			}
			return (nodes);
		}
		slowp = slowp->next;
		fastp = (fastp->next)->next;
	}
	return (0);
}

/**
 *print_listint_safe - prints a listint_t list safely
 *@head: pointer
 *Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}

