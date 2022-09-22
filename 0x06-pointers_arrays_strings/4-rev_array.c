#include "main.h"

/**
 * reverse_array - reverse the content of array of integer
 * @a: array
 * @n: no of elements in array
 * Return: null
 */
void reverse_array(int *a, int n)
{
	int j, frs, lst, kp, i;

	i = n / 2;
	frs = 0;
	ls = n - 1;

	for (j = 0; j < i; j++)
	{
		kp = a[frs];

		a[frs] = a[lst];

		a[lst] = kp;

		frs++;

		lst--;
	}
}
