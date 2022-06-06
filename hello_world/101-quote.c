#include <unistd.h>
/**
* main - prints "and that piece of art is useful" - Dora Korpar, 2015-10-19"
* @void: no args passed
*
*
*Return: the function will return error code "1"
*
*
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
