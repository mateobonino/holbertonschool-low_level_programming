#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: array
 * @n: the number of elements of the array
 * Return: The length of the string
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	i = 0;
	while (i < n - 1)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		i++;
		n--;
	}
}
