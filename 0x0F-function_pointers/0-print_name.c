#include "function_pointer.h"

/**
 * print_name - function that prints a name.
 *
 * @name: parameter is character
 *
 * @f: pointer to function
 *
 * return: function return void
 */

void print_name(char *name, void (*f)(char *))
{
if(name && f)
{
f(name);
}
}
