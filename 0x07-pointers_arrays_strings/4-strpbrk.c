#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches for a string for any set of bytes
 * @s: string to be serach
 * @accept: string to be searched for
 * Return: pointer to the bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int j, k;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[j] == accept[k])
				return (&s[j]);
		}
	}
	return (NULL);
}

