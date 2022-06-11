#include "main.h"
/**
* times_table - prints times table n times
* @n: the times to print the table
*
*
*Return: no return, void type function
*
*
*/
void print_times_table(int n)
{
	int num, mult, res;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				res = num * mult;
				if (res <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(res + '0');
				} else if (res <= 99)
				{
					_putchar(' ');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				} else
				{
					_putchar('1');
					_putchar(((res / 10) % 10) + '0');
					_putchar(((res / 10) % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
