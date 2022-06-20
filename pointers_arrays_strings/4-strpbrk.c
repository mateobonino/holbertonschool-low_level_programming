#include "main.h"
/**
* *_strpbrk- searches a string for any of a set of bytes.
* @s: the string to search
* @accept: the set of bytes
*Return: no return, void type function
*
*
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
