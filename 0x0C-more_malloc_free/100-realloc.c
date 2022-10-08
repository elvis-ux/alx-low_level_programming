#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory
 * @old_size: previous memory size
 * @new_size: new memory size in bytes
 * Return: pointer to the reallocated memory if successful, NULL, otherwise
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *asyn;

	if (new_size == old_size)
		return (ptr);
	asyn = realloc(ptr, new_size);
	if (asyn == NULL)
		return (NULL);
	return (asyn);
}
