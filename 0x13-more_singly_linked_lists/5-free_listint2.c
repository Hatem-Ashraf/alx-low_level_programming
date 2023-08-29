#include <stdlib.h>
#include "lists.h"
/**
  * free_listint2 - Frees a list and sets the head to null after that
  * @head: The head of the list
  *
  * Return: nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *temp2 = NULL;

	if (!head || !*head)
		return;
	while (temp)
	{
		temp2 = temp;
		temp = temp->next;
		free(temp2);
	}
	*head = NULL;

}
