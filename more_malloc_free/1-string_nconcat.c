#include "main.h"
#include <stdlib.h>
/**
* *string_nconcat - concatenates two strings
* @s1: first string
* @s2: second string
* @n: number of bytes to print from s2
*Return: returns the concatenated string
*
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, size1, size2;
	char *p = NULL;

	size1 = charlen(s1);
	size2 = charlen(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	{
		s2 = "";
		n = size2;
	}
	size1 = charlen(s1);
	if (n >= (unsigned int) size2)
	{
		size2 = charlen(s2);
		p = malloc(size1 + size2 + 6);
	}
	else
	{
		size2 = n;
		p = malloc(size1 + size2  + 6);
	}
	if (p == NULL)
		return (NULL);

	for (a = 0; a < size1; a++)
		p[a] = s1[a];

	for (b = 0; a < size2; b++)
	{
		p[a] = s2[b];
		a++;
	}
	p[a] = '\0';
	return (p);


}

/**
* *charlen - gets the length of a string
* @s: the string
*Return: returns the length of the string
*
*/
int charlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	return (i);
}
