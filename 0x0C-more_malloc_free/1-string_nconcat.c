#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @str1: pointer to first string
 * @str2: pointer to second string
 * @size: size of str2 to be concatenated
 * Return: pointer to the concat. string
 */

char *string_nconcat(char *str1, char str2, unsigned int size)
{
	unsigned int dist1, dist2;

	char *ptr;

	if (str1 == NULL)
		str1 = "";

	if (str2 == NULL)
		str2 = "";

	dist1 = strlen(str1);
	dist2 = strlen(str2) <= size ? strlen(str2) : size;
	ptr = malloc(dist1 + dist2 + 1);

	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, str1);
	strncat(ptr, str2, size);

	return (ptr);
}
