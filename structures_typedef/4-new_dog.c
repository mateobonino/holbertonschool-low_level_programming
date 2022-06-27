#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* *new_dog - creates a new dog
* @name: dog name
* @age: dog age
* @owner: dog owner
*Return: if fails, NULL
*
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int namelen, ownlen, i;
	dog_t *dog;

	namelen = 0;
	ownlen = 0;
	for (; name[namelen]; namelen++)
		;
	for (; owner[ownlen]; ownlen++)
		;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	(*dog).name = malloc(sizeof(char) * (namelen + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	(*dog).owner = malloc(sizeof(char) * (ownlen + 1));
	if ((*dog).owner == NULL)
	{
		free((*dog).name);
		free(dog);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		(*dog).name[i] = name[i];
	(*dog).name[i] = '\0';
	for (i = 0; owner[i]; i++)
		(*dog).owner[i] = owner[i];
	(*dog).owner[i] = '\0';
	(*dog).age = age;

	return (dog);
}
