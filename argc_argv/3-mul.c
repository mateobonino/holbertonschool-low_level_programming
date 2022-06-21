#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies two numbers passed by command line
* @argc: counts the size of argv array
* @argv: array of passed arguments
*Return: if less than 2 args, returns 1, either, returns the result
*/
int main(int argc, char *argv[])
{
	int res, i;

	res = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		res = res * atoi(argv[i]);
	}
	printf("%i\n", res);
	return (0);
}
