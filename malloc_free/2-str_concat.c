#include "main.h"
#include <stdlib.h>
/**
* *str_concat - concatenates two strings
* @s1: first string
* @s2: second string
*Return: returns the concatenated string
*
*/
char *str_concat(char *s1, char *s2)
{
	long int i, j, s1len, s2len;
	char *a;

	if (s1 == NULL)
	{
		s1 = "";
	} else if (s2 == NULL)
	{
		s2 = "";
	} else if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	s1len = charlen(s1);
	s2len = charlen(s2);
	a = malloc(sizeof(char) * s1len + s2len + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1len; i++)
	{
		a[i] = s1[i];
	}
	for (j = 0; j < s2len; j++)
	{
		a[i] = s2[j];
		i++;
	}
	a[i] = '\0';
	return (a);
}

/**
* charlen - gets the length of a string
* @s: the string
*Return: returns the length of the string
*
*
*/
int charlen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
	{
		;
	}
	return (size);
}
