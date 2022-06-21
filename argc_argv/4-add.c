#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* main - adds two numbers passed by command line
* @argc: size of argv array
* @argv: contains the args passed
*Return: 1 if invalid digits, 0 if succesful
*/
int main(int argc, char *argv[])
{
	int i, res;
	char *k;
	unsigned int j, arlen;

	res = 0;	
	for (i = 1; i < argc; i++)
	{
		k = argv[i];
		arlen = strlen(k);
		for (j = 0; j < arlen; j++)
		{
			if (isdigit(*(k + j)) == 0)
			{
				printf("Error\n");
			}
			return (1);
		}
		res = res + atoi(argv[i]);
	}
	printf("%i\n", res);
	return (0);
}
