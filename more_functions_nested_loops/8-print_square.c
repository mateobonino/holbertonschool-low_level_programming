#include "main.h"
/**
* print_square - prints the character '#' making a square form
* @size: number of times to print '#'
*
*Return: no return, void type function
*
*
*/
void print_square(int size)
{
	int x, y;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
