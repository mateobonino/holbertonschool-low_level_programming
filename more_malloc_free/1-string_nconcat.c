#include "main.h"
#include <stdlib.h>
#include <string.h>
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
	unsigned int a, b, size1 = 0, size2 = 0;
	char *p = NULL;

	if (s1)
		size1 = strlen(s1);
	if (s2)
		size2 = strlen(s2);

	if (n >= size2)
	{
		p = malloc(size1 + size2 + 5);
	}
	else
	{
		size2 = n;
		p = malloc(size1 + size2  + 5);
	}
	if (p == NULL)
		return (NULL);

	for (a = 0; a < size1 ; a++)
		p[a] = s1[a];

	for (b = 0; a < size1 + size2; b++)
	{
		p[a] = s2[b];
		a++;
	}
	p[a] = '\0';
	return (p);
}
