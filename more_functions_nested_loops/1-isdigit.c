#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: the digit to check
 *
 * Return: if digit 1, otherwise returns 0
 */
int _isdigit(int c)
{
	if (c <= 9 && c >= 0)
		return (1);
	else
		return (0);
}
