#include "lists.h"
#include <stdlib.h>
/**
  * add_dnodeint_end - Adds a new node at the beginning
  * @head: Headof the list
  * @n: new node's value
  * Return: new-node's address
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (!new)
		return (NULL);
	new->next = NULL;
	new->prev = NULL;
	new->n = n;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	new->prev = temp;
	temp->next = new;
	return (new);
}
