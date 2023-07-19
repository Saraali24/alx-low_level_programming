#include "function pointer.h"

/**
 * print_name - function that prints a name.
 *
 * @name: parameter is character
 *
 * @f: parameter is pointer
 *
 * return: return function return void
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
