#include "main.h"
/**
* times_table - prints times table 9 times
* @void: no args
*
*
*Return: no return, void type function
*
*
*/
void times_table(void)
{
	int times, num, mult;

	for (times = 0; times < 10; times++)
	{
		for (num = 0; num < 10; num++)
		{
			mult = num * times;
			if (mult >= 10)
			{
				_putchar((mult / 10) + 48);
				_putchar((mult % 10) + 48);
			} else
			{
				_putchar(mult + 48);
			}
			if (num == 9)
			{
				continue;
			}
			if (times * (num + 1) < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			} else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
