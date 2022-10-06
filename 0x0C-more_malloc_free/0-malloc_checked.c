#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates a memory
 * @b: the number of bytes to be allocated
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
