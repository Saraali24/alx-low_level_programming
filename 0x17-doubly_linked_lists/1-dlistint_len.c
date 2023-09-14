#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * dlistint_len - prints the number of elements of doubly linked list
 * @h: pointer to list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t num_element = 0;
while (h != NULL)
{
num_element++;
h = h->next;
}
return (num_element);
}
