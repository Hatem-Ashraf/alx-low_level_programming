#include "lists.h"
#include <stdlib.h>
/**
  * free_dlistint - Adds a new node at the beginning
  * @head: Headof the list
  * Return: new-node's address
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp1 = head, *temp2 = head;

	if (head)
	{
		head = NULL;
		while (temp1)
		{
			temp2 = temp1;
			temp1 = temp1->next;
			free(temp2);
		}
	}
}
