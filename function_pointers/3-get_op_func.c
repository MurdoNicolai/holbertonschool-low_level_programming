#include <stddef.h>
#include "3-calc.h"
#include <stdio.h>


/**
 *get_op_func - return corect function depending on operand
 *@s: operand to check
 *Return: the function croesponding to oprand
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
	while (i < 5)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
