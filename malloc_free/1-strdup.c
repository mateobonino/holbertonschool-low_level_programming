#include <stdlib.h>
#include "main.h"
/**
* *_strdup - returns a pointer to a newly allocated space in memory
* @str: the string
*Return: NULL if str = NULL, p if copied succesfully
*
*
*/
char *_strdup(char *str)
{
	int j, size;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0'; size++)
	{
		;
	}
	p = malloc(sizeof(char) * size + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		p[j] = str[j];
	}
	p[j] = '\0';
	return (p);
}
