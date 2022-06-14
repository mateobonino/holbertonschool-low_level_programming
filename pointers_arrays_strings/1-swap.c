#include "main.h"
/**
* swap_int - swaps two int values
* @a: first int
* @b: second int
*Return: no return, void type function
*
*
*/
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

