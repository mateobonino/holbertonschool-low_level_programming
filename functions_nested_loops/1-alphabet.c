#include "main.h"
/**
* main - calls function "print_alphabet"
* @void: no args passed
*
*
*Return: the function will return error code "0"
*
*
*/
void print_alphabet(void)
{
	char letter;
	for(letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
	return;
}

int main(void)
{
	print_alphabet();
	return (0);
}
