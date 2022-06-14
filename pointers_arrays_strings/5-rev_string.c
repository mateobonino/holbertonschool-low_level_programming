#include "main.h"
/*
 *
 *
 *
 *
 *
 *
 *
 */
void _strle(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
}

void rev_string(char *s)
{
	int j, len;
	char *str_beg; *str_end, ch;

	len = _strle(*s);
	
	*str_beg = s;
	*str_end = s;

	for (j = 0; j < len; j++)
	{
		str_end++;
	}

	for (j = 0; j = len /2; j++)
	{
		ch = *str_end;
		*str_end = *str_beg;
		*str_beg = ch;

		str_beg++;
		str_end--;
	}



}
