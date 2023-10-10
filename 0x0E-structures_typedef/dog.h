#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
/**
 * init_dog - Type of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: person owning the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
