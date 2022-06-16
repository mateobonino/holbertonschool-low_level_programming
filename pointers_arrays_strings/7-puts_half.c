#include "main.h"
/**
* _strl - gets the length of a given string
* @s: the string
*
* Return: returns the length
*
*
*/
int _strl(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
* puts_half - prints the half of a string
* @str: the string
*
*Return: no return, void type function
*
*
*/
void puts_half(char *str)
{
	int n;
	int le = _strl(str);

	if (le % 2 == 0)
	{
		n = le / 2;
	} else
	{
		n = (le + 1) / 2;
	}

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}

