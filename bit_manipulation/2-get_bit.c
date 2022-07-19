#include "main.h"
/**
* get_bit - returns the value of a bit at a given index
* @n: the number to search the index
* @index: the index, starting from - of the bit you want to get
* Return: the value at index, or -1 if an error ocurred
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(int) * 8)
	{
		return (-1);
	}

	n >>= index;

	switch ((n & 1))
	{
		case 1:
			return (1);
		default:
			return (0);
	}
}
