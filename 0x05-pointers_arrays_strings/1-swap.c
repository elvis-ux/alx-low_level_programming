#include "main"

/**
 * swap_int - swaps the value of two integer
 * @a: first nu
 * @b: second nu
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
