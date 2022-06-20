#include "main.h"
/**
* *_strstr - locates a substring
* @haystack: the string to search
* @needle: the substring to search
*Return: null if the string is not found
*
*
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	if (needle[i] == '\0')
	{
		return (haystack);
	}
	while (haystack[i] != '\0')
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			if (needle[j + 1] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (0);
}
