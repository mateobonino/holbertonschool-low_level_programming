#include "dog.h"
#include <stdlib.h>
/**
* init_dog - initializes a variable of type struct dog
* @d: var name
* @name: dog name
* @age: dog age
* @owner: dog owner
*Return: void function
*
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
