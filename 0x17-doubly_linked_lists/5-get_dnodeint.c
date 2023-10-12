#include "lists.h"
#include <stdlib.h>
/**
  * get_dnodeint_at_index - Returns the data of a specific node
  * @head: Headof the list
  * @index: index
  * Return: new-node's address
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp1 = head;
	unsigned int idx = 0;

	if (!head)
		return (NULL);
	while (temp1)
	{
		if (index == idx)
			return (temp1);
		idx++;
		temp1 = temp1->next;
	}
	return (NULL);
}
