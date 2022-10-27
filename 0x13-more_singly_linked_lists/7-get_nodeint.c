#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: first node
 * @index: position of the node
 * Return: nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (index == 0 && head)
		return (head);
	for (i = 0; head && i < index; i++)
		head = head->next;
	if (head)
		return (head);
	return (NULL);
}
