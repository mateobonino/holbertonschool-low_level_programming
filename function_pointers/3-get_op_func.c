#include "calc.h"

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
	while(ops[i].ops)
	{
		if (s[0] == ops[i].op[0] && ops[i].op[0] != NULL)
		{
			return (ops.[i].op[0]);
		}
		i++;
	}
	return (NULL);
}
