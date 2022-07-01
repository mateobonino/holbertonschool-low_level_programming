#include "variadic_functions.h"
/**
* print_numbers - prints numbers passed by args
* @separator: char that separates numbers
* @n: the numbers
*Return: void function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list prmt;

	va_start(prmt, n);

	i = 0;
	while (i < n)
	{
		if (separator == NULL || i == n - 1)
		{
			printf("%d\n", va_arg(prmt, int));
		}
		else
		{
			printf("%d", va_arg(prmt, int));
			printf("%s", separator);
		}
		i++;
	}
}
