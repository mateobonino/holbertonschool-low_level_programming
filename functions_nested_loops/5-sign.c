#include "main.h"
/**
*print_sign - checks if number is greater than zero or not
*@n: arg to check (int)
*
*
*Return: "0" if lowercase, "1" if uppercase
*
*
*/
int print_sign(int n)
{
	int ret;

	if (n > 0)
	{
		_putchar('+');
		ret = 1;
	} else if (n == 0)
	{
		_putchar('0');
		ret = 0;
	} else
	{
		_putchar('-');
		ret = -1;
	}
	return (ret);
}
