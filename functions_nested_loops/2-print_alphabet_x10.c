#include "main.h"
/**
* print_alphabet_x10 - prints entire alphabet from A to Z in lowercase 10 times
* @void: no args
*
*
*Return: no return, void type function
*
*
*/
void print_alphabet_x10(void)
{

	int times;
	char a;

	for (times = 0; times < 10; times++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
