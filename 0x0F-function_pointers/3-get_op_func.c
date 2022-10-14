#include <stddef.h>
#include "3-calc.h"

/**
 * get_op_func - Function to select the right func
 * @s: operators
 * Return: pointer to function corresponding to operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op != NULL && ops[i].f != NULL)
	{
		if (op[i].op[0] == s[0] && !s[1])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
