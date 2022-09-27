#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer where characters are searched
 * @c: character to be searched
 * Return: a pointer to thefirst occurance of a char
 */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] != '\n'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}

	return (Null);
