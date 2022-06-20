#include "main.h"
/**
* is_prime_number - checks if the number is prime
* @n: the number to check
*
*Return: returns the value of prime_checker
*
*
*/
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (prime_checker(n, n / 2));
}
/**
* prime_checker - check if n is prime
* @n: number to check
* @i: the index
*
*Return: returns 1 if prime, 0 if not
*
*/
int prime_checker(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (prime_checker(n, i - 1));
		}
	}
}
