#include "function_pointers.h"
/**
 * get_op_func- a function.
 * @s: parameter.
 * Return: int.
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
	while (ops[i][0] != NULL)
	{
		if (s == ops[i][0])
		{
			return (&(ops[i][1]));
		}
		i++;
	}
	return (NULL);
}

