#include <stdio.h>
/**
* main - prints the number of arguments passed into it
* @argc: the size of argv array
* @argv: array containing the args passed
*Return: 0
*
*/
int main(int argc, char **argv __attribute__((unused)))
{
	int args = argc - 1;

	printf("%d\n", args);
	return (0);
}
