#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: string
*
*Return: no return, void type function
*
*
*/
void print_rev(char *s)
{
	int i, j;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; s[j] != '\0'; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
