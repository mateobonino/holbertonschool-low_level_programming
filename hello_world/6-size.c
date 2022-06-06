#include <stdio.h>
/**
* main - prints the size of various types on the computer
* @void: no args passed
*
*
*Return: the function will return error code "0"
*
*
*/
int main(void)
{
	int myInt;
	float myFloat;
	double myDouble;
	char myChar;
	long int myLongInt;
	long long int myLongLongInt;

	printf("Size of a char: %zu byte(s)\n", sizeof(myChar));
	printf("Size of an int: %zu byte(s)\n", sizeof(myInt));
	printf("Size of a long int: %zu byte(s)\n", sizeof(myLongInt));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(myLongLongInt));
	printf("Size of a float: %zu byte(s)\n", sizeof(myFloat));

	return (0);

}
