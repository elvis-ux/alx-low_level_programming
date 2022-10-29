#include "main.h"

/**
 * get_bit - get bit at nth index
 * @n: bin number
 * @index: nth
 * Return: value of bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}
