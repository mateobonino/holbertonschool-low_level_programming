#include "main.h"
/**
* *_strchr - locates a character in a string
* @s: the strig
* @c: the character to find
*Return: returns the character if found
*
*
*/
char *_strchr(char *s, char c)
{
	int i, len;

	len = 0;
	while (s[len])
	{
		len++;
	}

	for (i = 0; i <= len; i++)
	{
		if (s[i] == c)
		{
			s = s + i;
			return (s);
		}
	}
	return ('\0');
}
