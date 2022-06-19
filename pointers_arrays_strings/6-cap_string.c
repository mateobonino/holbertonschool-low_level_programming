#include "main.h"
/**
* *cap_string - capitalizes all words
* @s: the string
*
*Return: returns the string capitlatized
*
*
*/
char *cap_string(char *s)
{
	int temp;
	char *val = s;

	temp = s[0];
	while (*s != '\0')
	{
		if (temp == ';' || temp == '.' || temp == ',' || temp == ' ')
			if (s[0] >= 'a' && s[0] <= 'z')
				s[0] -= 32;
		if (temp == '(' || temp == ')' || temp == '{' || temp == '}')
			if (s[0] >= 'a' && s[0] <= 'z')
				s[0] -= 32;
		if (temp == '\t' || temp == '\n' || temp == ' ' || temp == '"')
			if (s[0] >= 'a' && s[0] <= 'z')
				s[0] -= 32;
		temp = s[0];
		s++;
	}
	return (val);
}
