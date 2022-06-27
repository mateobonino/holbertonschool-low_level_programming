#include <stdio.h>
#define COMPILED __FILE__
/*
 * main - shows the file the program was compiled from
 * Return: 0
 *
 *
 *
 */
int main(void)
{
	printf("%s\n", COMPILED);
	return (0);
}
