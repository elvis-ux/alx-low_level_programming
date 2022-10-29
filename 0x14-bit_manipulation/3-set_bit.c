#include "main.h"

/**
 * set_bit - function that sets a value of a bit to 1 at a given index
 * @n: decimal no
 * @index: index of the bit
 * Return: 1 if successful else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);
	return (1);
}
