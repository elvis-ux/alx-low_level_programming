#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: Destination string
 *
 * @src: strings to be concatenated
 *
 * @n: no of bytes to be copied
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;
	int destlength = 0;
	int count = 0;

	while (dest[count] != '\0')
	{
		destlength++;

		count++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[destlength + j] = src[j];

	dest[destlength + j] = '\0';
	return (dest);
}
