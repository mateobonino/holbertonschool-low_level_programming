#include "variadic_functions.h"
/**
* print_all - prints all arguments passed
* @format: if 'c, s, i or f' passed, acts like a printf() functions
* otherwise, ignores the character and prints the args passed
*
*/
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	int in;
	char *s;
	va_list prmt;

	va_start(prmt, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c': /*case 'c' print a character*/
				putchar(va_arg(prmt, int));
				break;
			case 's':
				s = va_arg(prmt, char *);
				print_str(s);
				break;
			case 'i':
				in = va_arg(prmt, int);
				printf("%d", in);
				break;
			case 'f':
				printf("%f", va_arg(prmt, double));
				break;
			default:
				i++;
				continue;
		}
		if ((format[i] == 'f' || format[i] == 'i' ||
			format[i] == 's' || format[i] == 'c') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
 	va_end(prmt);
}

/**
* print_str - prints the given string
* @s: the string
*Return: void functions
*/
void print_str(char *s)
{
	char *isnull = "(nil)";

	if (s == NULL)
		s = isnull;
	while (*s != '\0')
		putchar(*s++);

}
