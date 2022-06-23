#include "main.h"
#include <stdlib.h>
/*
*
*
*
*
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	char *a;

	if (widht <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * width);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < heigth; i++)
	{
		a[i] = malloc(sizeof(int) * heigth);
		if (a[i] == NULL)
		{
			return (NULL);
			for (j = 0;)
		}
	}
}
