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
	int state = 0, in;
	char ch, *s;
	float flo;
	va_list prmt;

	va_start(prmt, format);
	while (format[i] != '\0' && format != NULL)
	{
		switch (format[i])
		{
			case 'c':
				ch = va_arg(prmt, int);
				printf("%c", ch);
				break;
			case 's':
				s = va_arg(prmt, char *);
				if (s == NULL)
					printf("(nil)");
				printf("%s", s);
				break;
			case 'i':
				in = va_arg(prmt, int);
				printf("%d", in);
				break;
			case 'f':
				flo = va_arg(prmt, double);
				printf("%f", flo);
				break;
			default:
				i++;
				continue;
		}
		if ((format[i] == 'f' || format[i] == 'i' ||
			format[i] == 's' || format[i] == 'c') && format[i + 1] != '\0')
			printf(",");
		i++;
	}
	printf("\n");
}
