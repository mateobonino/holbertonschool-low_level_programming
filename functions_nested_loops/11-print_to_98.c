#include "main.h"
#include <stdio.h>
/**
* print_to_98 - prints natural numbers until 98
* @n: number to start
*
*
*Return: no return, void type function
*
*
*/
void print_to_98(int n);
{
	if (n <= 98)
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	} else
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
}
