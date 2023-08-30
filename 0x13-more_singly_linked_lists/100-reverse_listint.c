#include "lists.h"
#include <stddef.h>
/**
  * reverse_listint - Reverses the list
  * @head: The head
  *
  * Return: pointer to the new head
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *prev;

	if (!head || !*head)
		return (NULL);
	temp = (*head)->next;
	prev = *head;
	prev->next = NULL;
	while (temp)
	{
		*head = temp->next;
		temp->next = prev;
		prev = temp;
		temp = *head;

	}
	*head = prev;
	return (*head);
}
