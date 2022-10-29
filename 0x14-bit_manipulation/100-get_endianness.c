#include "main.h"

/**
 * get_endianness - check the endian status
 *
 * Return: 1
 */

int get_endianness(void)
{
	int x = 1;
	char *c = (char *)(&x);

	return (*c);
}
