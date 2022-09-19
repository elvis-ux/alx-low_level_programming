#include "main.h"

/**
 * _strlen - returns thr length of a string
 * @s: input sr
 * Return: length of a string
 */
int _strlen(char *s)
{
	int j = 0;

	while (*(s + j))
		j++;
	return (j);
}
