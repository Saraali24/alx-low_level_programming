#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 *
 * @n: parameter is integer
 *
 * Return: return always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
return (0);
sum_them_all(n);
}
