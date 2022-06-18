#include "main.h"
/**
* *_strncat - concatenates two strings
* @dest : first string
* @src: second string
* @n: amount of bytes the function will use from src
*Return: returns the concatenated string
*
*
*/
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i]
	}
	dest[len + i] = '\0';
	return (dest);
}
