#include "lists.h"
/**
 * listint_len - Returns no element in a linked listint list
 * @h: pointer to the head node
 * Return: no of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nnode = 0;

	while (h != NULL)
	{
		nnode++;
		h = h->next;
	}
	return (nnode);
