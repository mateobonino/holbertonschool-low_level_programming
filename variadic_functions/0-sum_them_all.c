#include "variadic_functions.h"
/**
* sum_them_all - returns the sum of all parameters
* @n: the parameters
*
*Return: result of the sum of parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	int res = 0;

	va_list prmt;

	if (n == 0)
	{
		return (0);
	}
	va_start(prmt, n);

	for (unsigned int i = 0; i < n; i++)
	{
		res += va_arg(prmt, int);
	}
	return (res);
}
