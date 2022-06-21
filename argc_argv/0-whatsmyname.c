#include <stdio.h>
/**
* main - prints the name of he program followed by a new line
* @argc: the argv array size
* @argv: contains an array with the arguments passed by argc
*Return: 0
*
*/
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
