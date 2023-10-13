#include "lists.h"
#include <stdlib.h>
/**
  * delete_dnodeint_at_index - inserts a node at poisition
  * @head: Head of the list
  * @index: index
  * Return: 1 if success otherwise -1
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = *head;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp->next)
	{
		if (index == i)
		{
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
		i++;
		temp = temp->next;
	}
	if (index == i)
	{
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}
	return (-1);
}
