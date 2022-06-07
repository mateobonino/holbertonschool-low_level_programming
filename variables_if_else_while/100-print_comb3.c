#include <stdio.h>
/**
* main - prints all combinations of 2 digit numbers
* @void: no args passed
*
*
*Return: the function will return error code "0"
*
*
*/
int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = a+1; b < 10; b++)
		{
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');
			if (a != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return(0);	
}
