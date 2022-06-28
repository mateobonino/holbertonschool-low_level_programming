#include "function_pointers.h"
#include <stdlib.h>
/**
*int_index - searches for an integer
* @array: the array
* @size: the array size
* @cmp: the pointer
*Return: a int
*
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((*cmp) == NULL)
	{
		return (-1);
	}
	if (array == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
