#include "lists.h"
#include <stdio.h>
/**
  * print_dlistint - Prints a doubly linked list items
  * @h: Head of the list
  * Return: No of elements
  */
unsigned int print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	unsigned int i = 0;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
