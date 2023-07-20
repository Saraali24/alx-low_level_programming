#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 *
 * @n: parameter is integer
 *
 * @separator: string to be printed between numbers
 *
 * Return: returns void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list countp;
unsigned int i;
va_start(countp, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(countp, unsigned int));
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(countp);
printf("\n");
}
