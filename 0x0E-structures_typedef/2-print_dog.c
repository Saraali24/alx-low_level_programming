#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog is a function that prints a struct dog
 *
 * @d: variable name of structure
 *
 */

void print_dog(struct dog *d)
{
if (d == NULL)
return(NULL);	
if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s", d->name);
printf("\nAge: %f", d->age);
printf("\nOwner: %s", d->owner);

}
