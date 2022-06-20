#include "main.h"
/**
* _puts_recursion - prints a string with recursion
* @s: the string to print
*
*Return: no return, void type function
*
*
*/
int _sqrt_recursion(int n)
{
	if (n < 0 && n % 2 != 0)
	{
		return (-1);
	} else if (n == 0)
	{
		return (n);
	}
	else
	{
		return (sqrt_check(n, 0));
	}
}
int sqrt_check(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	} else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (sqrt_check(n, i + 1));
	}
}
