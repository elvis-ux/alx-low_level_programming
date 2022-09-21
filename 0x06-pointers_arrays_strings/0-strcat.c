#include "main.h"

/**
 * _strcat - concatenates one string to another
 *
 * @dest: destination string
 *
 * @src: strings to be concatenated
 *
 * Return: The destination string
 */
char *_strcat(char *dest, char *src)
{
	int j;

	int destLength = 0;

	int counter = 0;

	while (dest[counter] != '\0')
	{
		destLngth++;

		counter++;
	}
	for (j = 0; src[j] != '\0'; j++)
		dest[destLength + j] = src[j];

	dest[destLength + j] = '\0';

	return (dest);
}
