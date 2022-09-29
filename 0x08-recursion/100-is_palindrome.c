#include "main.h"

/**
 * _strlen_recursion - size
 * @s: points to string param
 * Return: recursion(char *s)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * compare_to - compares each character of the string
 * @s: string
 * @a: smallest iterator
 * @b: biggest iterator;
 * Return: .
 */

int compare_to(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
			return (1);
		return (0 + compare_to(s, a + 1, b - 1));
	}
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: points to string
 * Return: recursion
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_to(s, 0, _strlen_recursion(s) - 1));
}
