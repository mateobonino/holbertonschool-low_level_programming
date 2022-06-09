#include "main.h"
/**
* _isupper - checks if a char is in lower or uppercase
* @c: character
*
*
*Return: no return, void type function
*
*
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
