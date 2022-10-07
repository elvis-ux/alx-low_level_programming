#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: size of str2 to be concatenated
 * Return: pointer to the concat. string
 */

char *string_nconcat(char *s1, char s2, unsigned int n)
{
	unsigned int dist1, dist2;

	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	dist1 = strlen(s1);
	dist2 = strlen(s2) <= size ? strlen(s2) : n;
	ptr = malloc(dist1 + dist2 + 1);

	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, s1);
	strncat(ptr, s2, n);

	return (ptr);
}
