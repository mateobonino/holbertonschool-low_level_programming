#include "main.h"
/**
* print_diagonal - prints the character '\' followed by a new line
* @n: number of times to print '\'
*
*Return: no return, void type function
*
*
*/
void print_diagonal(int n)
{
	int times, space;

	if (n > 0)
	{
		for (times = 0; times < n; times++)
		{
			for (space = 0; space < times; space++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			if (times == n - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
