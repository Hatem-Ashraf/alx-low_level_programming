#include "lists.h"
#include <stdlib.h>
/**
  * insert_nodeint_at_index - Creates a node at a specific index
  * @head: The head
  * @idx: index
  * @n: integer value
  *
  * Return: Pointer to the created node or NULL if failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *prev;
	unsigned int i;
	listint_t *node = malloc(sizeof(listint_t));

	if (!head || !node)
		return (NULL);
	temp = *head;
	node->n = n;
	if (!*head)
	{
		node->next = *head;
		(*head)->next = node;
		return (node);
	}
	for (i = 0; temp; i++)
	{
		if (i == idx)
		{
			prev->next = node;
			node->next = temp;
			return (node);
		}
		prev = temp;
		temp = temp->next;
	}
	free(node);
	return (NULL);
}
