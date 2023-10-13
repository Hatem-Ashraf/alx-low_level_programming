#include "lists.h"
#include <stdlib.h>
/**
  * insert_dnodeint_at_index - inserts a node at poisition
  * @h: Head of the list
  * @idx: index
  * @n: data
  * Return: address of the new node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp1 = *h, *temp2 = NULL, *new = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (!*h)
	{
		*h = new;
		return (new);
	}
	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (temp1)
	{
		if (idx == i++)
		{
			new->next = temp1;
			new->prev = temp1->prev;
			temp1->prev->next = new;
			temp1->prev = new;
			return (new);
		}
		temp2 = temp1;
		temp1 = temp1->next;
	}
	if (idx == i)
	{
		new->prev = temp2;
		temp2->next = new;
		return (new);
	}
	return (NULL);
}

