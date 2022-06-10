#include "main.h"
/**
* print_line - prints the character '_' followed by a new line
* @n: number of times to print '_'
*
*Return: no return, void type function
*
*
*/
void print_line(int n)
{
	int times;

	for (times = 1; times <= n; times++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
