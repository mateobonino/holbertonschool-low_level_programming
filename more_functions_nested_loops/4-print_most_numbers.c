#include "main.h"
/**
 * print_most_numbers - prints number from 0 to 9 excepting 2 and 4
 * @void: no args
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
		{
			_putchar((num % 10) + '0');
		} else
		{
			continue;
		}
	}
	_putchar('\n');
}
