#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_strings - function that prints strings
 *
 * @n: parameter is integer
 *
 * @separator: string to be printed between the strings
 *
 * Return: returns void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
unsigned int i;
char *str;
va_start(strings, n);
for (i = 0; i < n; i++)
{
str = va_arg(strings, char*);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
