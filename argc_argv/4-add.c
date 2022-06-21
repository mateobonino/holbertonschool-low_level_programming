#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - adds to numbers passed by command line args
* @argc: size of argv array
* @argv: contains the args passed
*Return: 1 if invalid digits, 0 if succesful
*/
int main(int argc, char *argv[])
{
	int i, j, numcheck;
	unsigned int res, num;
	i = 1;
	while (argc != '\0')
	{
		printf("check for null char\n");
		numcheck = *argv[i];
		printf("defined numcheck var\n");
		if (argc >= 2 && isdigit(num))
		{
			printf("if condition passed succesfully\n");
			num = atoi(argv[j]);
			for (j = 1; j < argc; j++)
			{
				printf("adde2 numbers correctly\n");
				res = res + num;
			}
			i++;
		}
		else
		{
			printf("Error\n");
			return (0);
		}
	}
	printf("%i\n", res);
	return (0);
}
