#include "search_algos.h"
/**
 * jump_search -  searches for a value in a sorted array of integers
 * using the Jump Search Algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: is the value to search for
 * Return: index where value is stored, otherwise return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, j = 0;

	if (!array || !size)
		return (-1);
	j = sqrt(size);
	for (i = 0; array[i] < value && i < (int) size;)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i += j;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i - j, i);

	for (i = i - j; array[i] < (int) value && i != size;)
	{
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
		i++;
		if (array[i] == value)
		{
			printf("Value checked array [%ld] = [%d]\n", i, array[i]);
			return (i);
		}
	}
	return (-1);
	
}