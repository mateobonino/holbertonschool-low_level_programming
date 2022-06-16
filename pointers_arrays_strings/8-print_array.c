#include "main.h"
#include <stdio.h>
/**
* print_array - prints n elementes of an array
* @n: the number of elements to print
* @a: the array
*Return: no return, void type function
*
*
*/


void print_array(int *a, int n)
{
	int counter;

	for (counter = 0; counter < n; counter++)
	{
		printf("%d", a[counter]);
		if (counter + 1 != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
