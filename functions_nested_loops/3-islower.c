#include "main.h"
/**
*_islower - checks if a letter is in lowercase or not
*@int @c - (character)
*
*
*Return: "0" if lowercase, "1" if uppercase
*
*
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
