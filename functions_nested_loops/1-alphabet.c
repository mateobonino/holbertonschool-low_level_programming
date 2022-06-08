#include "main.h"
/**
* print_alphabet - prints entire alphabet from A to Z in lowercase
* @void: no args
*
*
*Return: no return, void type function
*
*
*/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
