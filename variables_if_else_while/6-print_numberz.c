#include <stdio.h>
/**
* main - prints numbers from 0 to 9
* @void: no args passed
*
*
*Return: the function will return error code "0"
*
*
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}
	putchar('\n');
	return (0);
}
