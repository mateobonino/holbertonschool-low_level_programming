#include "main.h"
/**
* *_memcpy - copies a memory area
* @dest: memory area to copy
* @src: memory area 1
* @n: number of bytes
*Return: no return, void type function
*
*
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
