#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - is a dog structure
 * @name: first member is name
 * @age: second member is age
 * @owner: third member is owner
 *
 * Description: structure dog just alone dog struct in a big kitty world
 */
struct dog
{
char *name;
float age;
char *owner;
};
void dog(struct dog *d, char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
typedef struct dog dog_t;


#endif /* DOG_H */
