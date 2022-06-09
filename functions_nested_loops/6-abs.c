#include "main.h"
/**
* _abs - prints absolute value of an integer.
* @r: integer
*
*
*Return: no return, void type function
*
*
*/
int _abs(int r)
{
	int ret;

	if (r < 0)
	{
		ret = r * -1;
	} else
	{
		ret = r * 1;
	}
	return (ret);
}
