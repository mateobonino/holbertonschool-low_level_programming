#include "main.h"
#include <stdlib.h>
/**
* **alloc_grid - returns a pointer to a 2d array
* @width: the array width
* @height: the array height
*Return: NULL if w, h or a = NULL, a otherwise
*
*
*/
int **alloc_grid(int width, int height)
{
	int n, m;
	int **a = NULL;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < height; n++)
	{
		a[n] = malloc(sizeof(int) * width);
		if (a[n] == NULL)
		{
			free(a);
			for (m = 0; m <= n; m++)
			{
				free(a[m]);
			}
			return (NULL);
		}
		for (m = 0; m < width; m++)
		{
			a[n][m] = 0;
		}
	}
	return (a);
}
