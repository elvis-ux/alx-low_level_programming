#include "main.h"

/**
 * flip_bits - returns the no of bits needed to flip to get one no to another
 * @n: first bit
 * @m: second bit
 * Return: hamming distance
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int shift = (sizeof(n) * 8);
	int dist = 0;

	while (shift--)
		dist += (n >> shift & 1) != (m >> shift & 1);

	return (dist);
}
