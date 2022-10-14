#include "3-calc.h"

/**
 * get_op_func - selects the correct function for the operator passed to it
 * @s: the operator passed as string of length 2
 *
 * Description: if the string s does not match any of the 5 expected operators
 * this function returns null
 * Return: return a pointer to a function that accepts two int arguments and
 * returns and int result
 */
int (*get_op_func(char *s))(int, int)
{
	/* This is an array of structs op declared in 3-calc.h */
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
	if (s == 0)
	{
		return (NULL);
	}
	while (ops[i].op)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			/* returns a pointer to the correct function */
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
