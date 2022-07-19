#include "main.h"
/**
* binary_to_uint - converts any binary number to an unsigned int
* @b: points to a string of 0 and 1 chars
* Return: the converted number.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, base = 1;
	int len;

	if (b == NULL)
		return (0);

	len = 0;
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	while (len--)
	{
		res += (b[len] - '0') * base;
		base *= 2;
	}

	return (res);
}
