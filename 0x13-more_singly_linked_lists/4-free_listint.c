#include "lists.h"
#include <stdlib.h>
/**
  * free_listint - Frees a list
  * @head: The head of the list
  *
  * Return: Nothing
  */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	if (!head)
		return;
	while (temp)
	{
		head = temp;
		temp = temp->next;
		free(head);
	}
}
