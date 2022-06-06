#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - checks last digit from a number
*
*
*Return: the function will return error code "0"
*
*
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastDigit;
	lastDigit = n % 10;
	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	} else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, lastDigit);
	} else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	}
	return (0);
}
