#include <stddef.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Type of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: person owning the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
