#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *  _strdup - allocates space in memory which contains a copy
 *  of string given as a parameter
 *  @str: sring to be copied
 *  Return: success if function returns a pointer to the duplicated string
 *  and retuns null if insufficient memory was available
 */

char *_strdup(char *str)
{
	int size = 0;
	char *stDup;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;

	stDup = malloc(size * sizeof(*str) + 1);

	if (stDup == 0)
		return (NULL);

	strcpy(stDup, str);
	return (stDup);
}
