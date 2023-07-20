#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_all - function that prints anything.
 * @c: parameter is character
 * @f: parameter is float
 * @num: parameter is integer
 * @str: parameter is string
 * Return: returns void
 */
void print_all(const char * const format, ...)
{va_list args;
unsigned int i = 0;
char *str;
char c;
int num;
float f;
va_start(args, format);
while (format && format[i])
{switch (format[i])
{case 'c':
c = va_arg(args, int);
printf("%c", c);
break;
case 'i':
num = va_arg(args, int);
printf("%d", num);
break;
case 'f':
f = (float)va_arg(args, double);
printf("%f", f);
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
{printf("(nil)");}
else
{printf("%s", str);}
break;
default:
break;}
if (format[i + 1] && (format[i] == 'c' || format[i] == 'i' ||
format[i] == 'f' || format[i] == 's'))
{printf(", ");}
i++;}
va_end(args);
printf("\n");}
