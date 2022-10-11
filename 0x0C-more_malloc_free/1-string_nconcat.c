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
	char *s;
	unsigned int i = 0, j = 0, lng1 = 0, lng2 = 0;

	while (s1 && s1[lng1])
		lng++;
	while (s2 && s2[lng2])
		lng2++;

	if (n < lng2)
		s = malloc(sizeof(char) * (lng1 + n + 1));
	else
		s = malloc(sizeof(char) * (lng1 + lng2 + 1));

	if (!s)
		return (NULL);
	while (i < lng1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < lng2 && i < (lng1 + n))
		s[i++] = s2[j++];

	while (n >= lng2 && i < (lng1 + lng2))
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
}
