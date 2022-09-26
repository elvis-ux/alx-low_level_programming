#include "main.h"

/**
 * _memcpy - copies memory are
 * @dest: buffer
 * @src: vlue to be replaced
 * @n: no of bytes to be filled
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
