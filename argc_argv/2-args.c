#include <stdio.h>
/**
* main - prints all arguments it receives, including the first one (0)
* @argc: the size of argv array
* @argv: contains the args passed by command line
*Return: 0
*
*/
int main(int argc, char *argv[])
{
	int i, len;

	len = argc - 1;
	for (i = 0; i <= len; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
