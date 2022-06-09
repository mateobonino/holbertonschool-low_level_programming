#include "main.h"
/**
* print_last_digit - prints last digit of a number
* @r: number to print last digit of
*
*
*Return: no return, void type function
*
*
*/
int print_last_digit(int r)
{
	int lastd = r % 10;

	if (lastd < 0)
		lastd *= -1;
	_putchar(lastd + '0');
	return (lastd);
}
