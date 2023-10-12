#include "lists.h"
/**
  * dlistint_len - Counts how many elements
  * @h: Head of the linked list
  * Return: No of elements
  */
unsigned int dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	unsigned int len = 0;

	while (temp)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
