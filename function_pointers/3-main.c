#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* main - checks the code
* @argc: number of arguments
* @argv: array with the arguments
*Return: 0
*
*/
int main(int argc, char *argv[])
{
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/*printf("argc = 4\n");*/
	if (get_op_func(argv[2]) == NULL || strlen(argv[2]) > 1)
	{
		printf("Error\n");
		exit(99);
	}
	/*printf("argv[2] != NULL\n");*/
	if (((*argv[2]) == '/' || (*argv[2]) == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	/*printf("argv[1] and argv[3] are digits\n");*/
	res = (get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);
	return (0);
}
