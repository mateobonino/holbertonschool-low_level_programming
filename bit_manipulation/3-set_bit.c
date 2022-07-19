#include "main.h"
/**
* set_bit - set the value of a bit to 1 at a given index
* @n: the value
* @index: the index
* Return: 1 if it worked, -1 if an error ocurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	int ret = 0;
	if (sizeof(int) * 8 < index)
	{
		ret = -1;
	}
	else
	{
		*n |= 1 << index;
		ret = 1;
	}
	return (ret);
}
