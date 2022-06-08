#include "main.h"
/**
* print_alphabet - prints alphabet in lowercase
* @void: no args
*
*
*Return: no return, void type function
*
*
*/
void print_alphabet(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
	return;
}
