#include "3-calc.h"
#include <stdlib.h>
#include "function_pointers.h"
#include <string.h>

/**
 * get_op_func - a pointer to the function that corresponds to the op as a parm
 *  @s: operator passed as argument
 *  Return: Always 0 for sucess
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
	int m = 0;

	while (m < 5)
	{
		if (strcmp(s, ops[m].op) == 0)
			return (ops[m].f);

		m++;
	}

	return (0);
}
