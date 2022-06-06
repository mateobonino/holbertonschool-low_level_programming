#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - checks if "n" is positive, negative or equel to zero
* @void: no args passed
*
*
*Return: the function will return error code "0"
*
*
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("is positive");
	} else if (n == 0)
	{
		printf("Is zero\n");
	} else
	{
		printf("Is negative\n");
	}
	return (0);
}
