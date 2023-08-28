#include "lists.h"
/**
  * listint_len - Counts the length of the list
  * @h: the head of the list
  *
  * Return: Number of nodes
  */
unsigned int listint_len(const listint_t *h)
{
	int i = 0;

	if (!h)
		return (0);
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
