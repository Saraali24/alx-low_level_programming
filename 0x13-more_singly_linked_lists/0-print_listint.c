#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - function that prints elements of list.
 *
 * @count: the number of elemnts.
 *
 * @h: pointer to first node.
 *
 * Return: returns the number of elemnts of list.
 */


size_t print_listint(const listint_t *h)
{
size_t count;
count = 0;
while (h != 0)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
