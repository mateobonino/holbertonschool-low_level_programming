#include "search_algos.h"
/**
* binary_search - searches for a value in a sorted array of integers
* @array: a pointer to the first element of the array to search in
* @size: is the number of elements in array
* @value: is the value to search for
* Return: index where value is allocated, -1 if it failed
*/
int binary_search(int *array, size_t size, int value)
{
	int b = 0, f = (int) size - 1, mid = 0;

	if (!array)
		return (-1);
	while (b <= f)
	{
		print(array, b, f);
		mid = (b + f) / 2;
		if (array[mid] == value)
			return (mid);
		if (value < array[mid])
			f = mid - 1;
		else if (value > array[mid])
			b = mid + 1;
	}
	if (array[mid] == value)
		return (mid);
	return (-1);
}
/**
* print - prints an array
* @array: the array
* @beg: the beggining of the array
* @final: the final position of the array
* Return: void func
*/
void print(int *array, size_t beg, size_t final)
{
	size_t i;

	printf("Searching in array: ");
	for (i = beg; i < final; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}
