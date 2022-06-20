#include "main.h"
/**
* _sqrt_recursion - returns the natural sqrt of a number
* @n: the number
*Return: returns the sqrt of n
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
/**
* sqrt_check - checks if i is the sqrt of n
* @n: the number
* @i: the sqrt to check
*Return: returns i if is the sqrt of n
*/
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
