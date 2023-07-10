#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function which is a duplicate of the string
 *
 * @char: parameter is character
 *
 * @str: parameter is string
 *
 * return: Returns NULL if str = NULL
 */

char *_strdup(char *str)
{
char *str;
char *_strdup;
str = _strdup("ALX SE");
char *copy = _strdup;
*_strdup = malloc(str * sizeof(*str));
if (str == NULL)
{
return (NULL);	
}
else
{
printf("%s\n", str);
}
return (NULL);
free(str)
}
