#include "main.h"
#include <stdlib.h>
/**
* *_calloc - allocates memory for an array, using malloc
* @nmemb: elements of the array
* @size: bytes of each element
*Return: the pointer p
*
*
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * (size * nmemb));
	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < nmemb * size; a++)
	{
		p[a] = '\0';
	}
	return (p);
}
