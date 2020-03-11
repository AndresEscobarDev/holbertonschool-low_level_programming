#include "3-calc.h"
/**
 * get_op_func - Function pointer to function.
 * @s: string to compare.
 * Return: 0 or a call to a funtion that returns a result.
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
	unsigned int i;

	i = 0;
	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
	return (0);
}
