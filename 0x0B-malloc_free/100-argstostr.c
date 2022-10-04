#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  _strlen - find length of a string
 *
 *  @s: string
 *  Return: length
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * *argstostr - concatenates all the arguments
 *
 * @ac: counts
 * @av: argument
 * Return: points to string
 */

char *argstostr(int ac, char **av)
{
	int i = 0, nc = 0, j = 0, cmt = 0;
	char *s;

	if (ac == 0 || av == NULL)
	for (; i < ac; i++, nc++)
		nc += _strlen(av[i]);
	s = malloc(sizeof(char) * nc + 1);

	if (s == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmt++)
			s[cmt] = av[i][j];
		s[cmt] = '\n';
		cmt++;
	}
	s[cmt] = '\0';
	return (s);
}
