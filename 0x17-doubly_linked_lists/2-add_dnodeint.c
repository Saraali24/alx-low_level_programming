#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint - function that adds a new_node node at the beginning
 * @head: pointer to double list
 * @n: data integer
 * Return: the address of the new_node node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;
new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
if (*head == NULL)
{
*head = new_node;
new_node->prev = 0;
}
else
{
(*head)->prev = new_node;
new_node->next = *head;
new_node->prev = NULL;
*head = new_node;
}
return (new_node);
}
