#include "lists.h"
/**
 * listint_len - Returns no element in a linked listint list
 * @h: pointer to the head node
 * Return: no of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nNode = 0;

	while (h)
	{
		nNode++;
		h = h->next;
	}
	return (nNode);
