#include <stdlib.h>
#include "main.h"
/**
*
*
*
*
*
*/
char *_strdup(char *str)
{
	int i, j, size;
	char *p;

	for (size = 0; *str[size] != '\0'; size++)
	{
	}	

	if (*str == NULL)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < size; j++;)
		{
			p[j] = str[j];
		}
	}
	return (p);
}