#include <stdio.h>
#define COMPILED __FILE__
/**
 * main - prints the name of the file it was compiled from
 *
 * Return: 0
 */
int main(void)
{
	printf("%s\n", COMPILED);
	return (0);
}
