#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function that initialize a variable
 *
 * @name: parameter is character
 *
 * @age: parameter is character
 *
 * @owner: parameter is character
 *
 * @d: variable of structure
 *
 * return: returns void
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
