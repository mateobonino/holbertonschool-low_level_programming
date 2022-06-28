#include "function_pointers.h"
#include <stdlib.h>
/**
* array_iterator - prints each element from a given array
* @array: the array
* @size: the array size
* @action: the pointer
*Return: void function
*
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((*action) == NULL)
		return;
	if (array == NULL)
		return;
	if (size <= 0)
		return;
	i = 0;
	while (array[i] < size)
	{
		(*action)(array[i]);
		i++;
	}
}
