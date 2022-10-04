#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: null on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *sent;

	if (s1 == NULL)
		s1 = "\0";

	if (s2 == NULL)
		s2 = "\0";

	i = strlen(s1);
	j = strlen(s2);
	sent = malloc((i + j) * sizeof(*s1) + 1);
	if (sent == 0)
		return (NULL);
	strcat(sent, s1);
	strcat(sent, s2);
	return (sent);
}

/**
 * _strlen - gets length of a string
 * @s: the string of which length is required
 * Return: length of string
 */

int _strlen(const char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		;
	return (i);
}
