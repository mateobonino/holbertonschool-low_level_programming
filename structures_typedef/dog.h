#ifndef DOG_H
#define DOG_H

/**
* struct dog - struct containing info about a dog
* @name: name of the dog
* @age: age of the dog
* @owner: dog owner
*Return: returns the concatenated string
*
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*DOG_H*/
