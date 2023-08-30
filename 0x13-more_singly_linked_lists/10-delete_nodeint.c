#include "lists.h"
#include <stdlib.h>
/**
  * delete_nodeint_at_index - Deletes a node at idx
  * @head: Head of the list
  * @index: index of the specific node
  *
  * Return: 1 if success, otherwise -1
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int i;

	if (!head)
	{
		return (-1);
	}
	temp = *head;
	if (!index && *head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; temp; i++)
	{
		if (i == index - 1)
		{
			temp2 = temp->next;
			temp->next = temp->next->next;
			free(temp2);
			return (1);
		}
		temp = temp->next;
	}
	return (-1);
}
