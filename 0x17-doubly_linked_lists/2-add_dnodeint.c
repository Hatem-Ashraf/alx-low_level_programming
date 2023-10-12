#include "lists.h"
#include <stdlib.h>
/**
  * add_dnodeint - Adds a new node at the beginning
  * @head: Headof the list
  * @n: new node's value
  * Return: new-node's address
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

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
	(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (new);

}
