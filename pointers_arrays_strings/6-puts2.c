#include "main.h"
/**
* puts2 - prints every other character of a string
* @str: the string
*
*Return: no return, void type function
*
*
*/

void puts2(char *str)
{
	int i, len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len - 1; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
