#include "lists.h"

/**
  * list_len - counts the length of the list
  * @h: the head of the list
  *
  * Return: Number of nodes
  */
unsigned int list_len(const list_t *h)
{
	const list_t *temp = h;
	int i = 0;

	if (!h)
		return (0);
	for (i = 0; temp; i++)
		temp = temp->next;
	return (i);
}
