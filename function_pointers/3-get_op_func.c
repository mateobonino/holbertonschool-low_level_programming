#include "3-calc.h"
#include <stdio.h>

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
	while(ops[i].op)
	{
		printf("ops[i.op] exits\n");
		if (s[0] == ops[i].op[0] && ops[i].op[0] != '\0')
		{
			printf("s = op[0] and ops[i] != NULL\n");
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
