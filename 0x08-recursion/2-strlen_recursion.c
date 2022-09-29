#include "main.h"

/**
 * _strlen_recursion - The length of a string
 *
 * @s: string
 * Retun: length of the string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);

	return (1 + _strlen_recursion(++s));
}
