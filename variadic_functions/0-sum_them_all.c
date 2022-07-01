#include "variadic_functions.h"
/**
* sum_them_all - returns the sum of all parameters
* @n: the parameters
*
*Return: result of the sum of parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int res = 0;

	va_list prmt;

	if (n == 0)
	{
		return (0);
	}
	va_start(prmt, n);

	i = 0;
	while (i < n)
	{
		res += va_arg(prmt, int);
		i++;
	}
	return (res);
}
