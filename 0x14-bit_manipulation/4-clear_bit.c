#include "main.h"

/**
 * clear_bit -function that sets the value of bit to 0 at a giveb index
 * @n: pointer to bit
 * @index: the index to set the value
 * Return: if an error occurs -1 else 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);

	return (1);
}
