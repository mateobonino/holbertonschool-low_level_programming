#include "main.h"
/**
* clear_bit - clears a bit at a given index
* @n: the num
* @index: the index
* Return: 1 if it worked, -1 if an error ocurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	int ret;

	if (sizeof(int) * 8 < index)
	{
		ret = -1;
	}
	else
	{
		*n &= ~(1 << index);
		ret = 1;
	}
	return (ret);
}
