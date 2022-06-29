#include "main.h"
#include <stdio.h>
/**
* natural_numbers - prints the sum of all numbers below 1024
*Return - void function
*
*
*/
void natural_numbers(void)
{
	int i, res;

	i = 0;
	res = 0;
	while (i < 1024)
	{
		i++;
		if (i % 3 == 0 || i % 5 == 0)
		{
			res += i;
		}
	}
	printf("%d\n", res);
}
