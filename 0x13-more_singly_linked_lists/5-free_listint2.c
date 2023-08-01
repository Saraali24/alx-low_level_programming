#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - function frees a list.
 *
 * @head: pointer to first node
 *
 * Return: returns void
 */

void free_listint2(listint_t **head)
{
listint_t *curent;
if (head == NULL)
return;
while (*head != NULL)
{
curent = *head;
*head = (*head)->next;
free(curent);
}
*head = NULL;
}
