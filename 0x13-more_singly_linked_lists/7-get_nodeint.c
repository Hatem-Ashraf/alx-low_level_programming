#include "lists.h"
#include <stddef.h>
/**
  * get_nodeint_at_index - Finds the node with the specefic index
  * @head: The head of the list
  * @index: The index of the element
  *
  * Return: Pointer to the specefic node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);
	for (i = 0; head; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
