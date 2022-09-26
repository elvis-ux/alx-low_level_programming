#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: a buffer
 * @b: value to be replaced
 * @n: no of bytes
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *pst = s;

	for (; n != 0; pst++; n--)
		*pst = b;
	return (s);
}
