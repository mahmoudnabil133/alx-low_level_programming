#include "3-calc.h"
/**
 * get_op_func - function return ptr to func
 * @s: operator
 * @a: is n1
 * @b: is n2
 * Return: ptr to function
 */
int (*get_op_func(char *s))(int a, int b)
{
	if (s == NULL)
		return (-1);
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
			if (s == ops[i]->op)
				return (ops[i]->f(a, b));
			i++;
		}
	return (-1);
}
