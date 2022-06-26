#include "main.h"
#include <stdlib.h>
/**
* *array_range - creates an array of integers.
* @min: first element of the array
* @max: last element of the array
*Return: the pointer p
*
*
*/
int *array_range(int min, int max)
{
	int *p;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}
	for (i = min; i < (max - min) + 1; i++)
	{
		;
	}
	p = malloc(sizeof(int) * i);
	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		p[j] = min;
		min++;
	}
	return (p);
}
