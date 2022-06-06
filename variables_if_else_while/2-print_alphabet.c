#include <stdio.h>

/**
* main - prints entire alphabet from A to Z in lowecase
* @void: no args passed
*
*
*Return: the function will return error code "0"
*
*
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
