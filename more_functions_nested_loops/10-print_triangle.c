#include "main.h"
/**
* print_triangle - prints the character '#'. making a triangle
* @size: number of times to print '#'
*
*Return: no return, void type function
*
*
*/
void print_triangle(int size)
{
	int times, space, i;

	for (times = 1; times <= size; times++)
	{
		for (space = times; space < size; space++)
		{
			_putchar(' ');
		}
		for (space = 1; space <= times; space++)
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
