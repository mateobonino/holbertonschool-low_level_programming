#include "main.h"
/**
* *leet - encodes a string into 1337
* @s: the string to encode
*
*Return: the string encoded
*
*
*/
char *leet(char *s)
{
	char num[] = "4433007711";
	char let[] = "aAeEoOtTlL";
	int i, j;

	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == let[j])
			{
				s[i] = num[j];
			}
		}
		i++;
	}
	return (s);
}
