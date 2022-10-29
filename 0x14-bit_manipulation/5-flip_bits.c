#include "main.h"

/**
 * flip_bits - returns the no of bits needed to flip to get one no to another
 * @n: first bit
 * @m: second bit
 * Return: hamming distance
 */

uint flip_bits(ulong n, ulong m)
{
	ulong o;
	uint i = 0;

	o = n ^ m;

	while (o)
	{
		if (o & 1)
			I++;
		o = o >> 1;
	}
	return (i);
}
