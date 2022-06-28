#include "function_pointers.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
* main - checks the code
* @argc: number of arguments
* @argv: array with the arguments
*Return: 0
*
*/
int main(int argc, char *argv)
{
	int n1, n2, res;
	char *a = argv[2];
	if (argc == 4)
	{
		res = 0;
		n1 = atoi(argv[1]);
		n2 = atoi(argv[3]);
		if (isdigit(argv[1]) && isdigit(argv[3]) != 0)
		{
			res += (*get_op(char *s))(int n1, n2);
		;}
		printf("Error\n");
	}
	else
		printf("Error\n");
	printf("%d\n", res);
	return (0);
}
