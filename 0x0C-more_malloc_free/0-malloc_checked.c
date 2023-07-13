#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * 
 * @b: parameter is integer
 *
 * return : returns pointer to the allocated memory
 */


void *malloc_checked(unsigned int b)
{
void *ptr;
unsigned int b;

ptr = malloc(b);

if (ptr == NULL)

exit(98);

return (ptr);

free(ptr);
}
