#include "search_algos.h"
/**
* linear_search - seaches for a value in an array of integers
* @array: pointer to the first element of the array to search in
* @size: number of elements in the array
* @value: value to search for
* Return: the index where the value is located, otherwise, returns -1
*/
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (!array)
		return (-1);
	for (i = 0; array[i] && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}