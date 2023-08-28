#include "lists.h"
#include <stdio.h>
/**
  * print_listint - Prints a list
  * @h: The head of the list
  *
  * Return: Number of nodes
  */
unsigned int print_listint(const listint_t *h)
{
	int i = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
