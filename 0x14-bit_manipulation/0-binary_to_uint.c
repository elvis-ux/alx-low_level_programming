#include "main.h"
#include <string.h>
#include <stdio.h>
#include <math.h>

/**
 * binary_to_unit - converts binary no to unsigned int
 * @b: pointer to char array in binary to be converted
 * Return: converted no if successful else 0
 */

unsigned int binary_to_unit(const char *b)
{
	int i, base = 1, length = 0;
	unsigned int res = 0;

	if (b)
		return (0);
	length = strlen(b);
	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		if (b[i] == '1')
			res += base;
		base *= 2;
	}
	return (res);
}
