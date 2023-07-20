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
va_start(countp, n);
int i;
for (i = 0; i < n; i++)
{
printf("%d\n", va_arg(countp, int));
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}

va_end(countp);
printf("\n");
}
