#include <stdio.h>
/**
* main - prints all numbers of base 16 in lowercase
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
	char a;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
