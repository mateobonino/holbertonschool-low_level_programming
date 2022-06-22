#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *create_array - creates an array an initilizates with specific char
* @size: the size of the array
* @c: the char to initializate
*Return: if size = 0, returns NULL, otherwise, returns the character
*
*
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int n;

	if (size <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (n = 0; n < size; n++)
		{
			arr[n] = c;
		}
	}
	return (arr);
}
