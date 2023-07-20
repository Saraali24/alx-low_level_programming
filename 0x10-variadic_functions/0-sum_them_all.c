#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 *
 * @n: parameter is integer
 *
 * Return: returns sum
 */

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list countp;
if (!n)
{
return (0);
}
va_start(countp, n);
for (i = 0; i < n; i++)
{
sum += va_arg(countp, unsigned int);
}
va_end(countp);
return (sum);
}
