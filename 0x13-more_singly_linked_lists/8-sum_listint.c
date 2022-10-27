#include "lists.h"

/**
 * sum_listint - sum of all the data in a list
 * @head: pointer to first node
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
