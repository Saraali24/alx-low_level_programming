#include "main.h"
/**
 *_print_rev_recursion - function that prints a string in reverse
 *
 * @s: parameter is character
 *
 * Return: returns (0).
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
return;
}
putchar(*s);
_print_rev_recursion(s + 1);
}
