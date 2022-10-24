#include "lists.h"

/**
 * list_len - counts the no of elements ina list
 * @h: list head
 * Return: no of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t size = 0;
	list_t *node;

	if (h == NULL)
		return (0);
	if (h->next != NULL)
		size++;
	else
		return (1);
	node = h->next;
	for (; node != NULL; size++, node = node->next)
	{
		continue;
	}

	return (size);
}
