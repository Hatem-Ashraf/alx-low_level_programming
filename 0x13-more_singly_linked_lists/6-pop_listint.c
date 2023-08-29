#include "lists.h"
#include <stdlib.h>
/**
  * pop_listint - Pops the first element in the list
  * @head: the head of the list
  *
  * Return: The integer value if the poped element
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !*head)
		return (0);
	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
