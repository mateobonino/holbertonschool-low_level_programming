#include <stdio.h>

/**
* main - prints entire alphabet from A to Z in lowecase and uppercase
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
	char a;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
