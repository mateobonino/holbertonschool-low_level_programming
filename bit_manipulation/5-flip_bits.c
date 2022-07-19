#include "main.h"
/**
* flip_bits - counts the number of bits needed to get other number
* @n: the first number
* @m: the second number
* Return: the number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int total = n ^ m, i = 0;

	while (total)
	{
		total &= total - 1;
		i++;
	}
	return (i);
}
