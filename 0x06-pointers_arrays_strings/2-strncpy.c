#include "main.h"

/**
 * _strncat - copies a string
 * @dest: Destination string
 * @src: strings concatinated
 * @n: no of bytes to be copied
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
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
