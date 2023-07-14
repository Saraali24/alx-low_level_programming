#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: parameter is character.
 *
 * @s2: parameter is character.
 *
 * @n: parameter is interger.
 *
 * return: returns to a newly allocated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned len1, len2, len3, size, i, j;
char *nstr;
if (s1 == NULL)
S = "";
if (s2 == NULL)
s2 = "";
len1 = 0;
while (s1[len1] != '\0')
len1++;
len2 = 0;
while (s2[len2] != '\0')
len2++;
if (n >= len3)
len3 = len2;
else 
len3 = n;
size = len1 + len3;
nstr = malloc ((size * sizeof(char))+ 1);
if (nstr == NULL)
return (NULL);
i = 0;
while (i < len1)
{
nstr[i] = s1[i];
i++;
}
j = 0;
while (j < len3)
{
nstr[i] = s2[j];
i++;
j++;
}
nstr[i] = '\0';
return (nstr);
free(nstr);
}
