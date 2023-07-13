#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * malloc_checked - function that allocates memory
 * 
 * @b: parameter is integer
 *
 * @ptr: parameter is pointer
 *
 * return : returns pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
unsigned int b;
ptr = malloc(unsigned int b * sizeof(int));
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
