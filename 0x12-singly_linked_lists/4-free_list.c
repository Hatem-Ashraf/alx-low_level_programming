#include "lists.h"
#include <stdlib.h>
/**
  * free_list - frees a list
  * @head: pointer to the list
  *
  * Return: nothing
  */
void free_list(list_t *head)
{
	list_t *temp = head;

	if (!head)
		return;
	while (temp)
	{
		head = temp->next;
		free(temp->str);
		free(temp);
		temp = head;
	}
}
