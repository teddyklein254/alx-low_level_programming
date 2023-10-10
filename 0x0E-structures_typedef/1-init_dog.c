#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
/**
 * struct dog - Type of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: person owning the dog
 */
struct dog
{
        char *name;
        float age;
        char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner)
{
        if (d == NULL)
                return ;
        d->name = name;
        d->age = age;
        d->owner = owner;
}
#endif
