#include <stdio.h>
/**
* main - prints alphabet reversed
* @void: no args passed
*
*
*Return: the function will return error code "0"
*
*
*/
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
