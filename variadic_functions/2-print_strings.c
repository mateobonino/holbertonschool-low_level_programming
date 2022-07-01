#include "variadic_functions.h"
/**
* print_strings - prints strings passed by args
* @separator: separator between strings
* @n: number of strings to print
*Return: void function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *a;
	va_list prmt;

	va_start(prmt, n);

	i = 0;
	while (i < n)
	{
		a = va_arg(prmt, char *);
		if (!a)
			printf("(nil)");
		else
			printf("%s", a);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(prmt);
}
