#include <stdio.h>
/**
* main - prints all combinations of 2-2 digits numbers from 0 to 99
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

	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			if (a == 98 && b == 99)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
