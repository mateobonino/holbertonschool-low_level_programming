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
	char arr[nmemb];
	int *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(arr) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
