#include <stdio.h>
/**
* main - prints alphabet in lowercase excepting q and e
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

	c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
