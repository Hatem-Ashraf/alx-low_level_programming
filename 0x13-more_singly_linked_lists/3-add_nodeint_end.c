#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - Adds a new node to the last of the list
  * @head: the head of the list
  * @n: Integer value
  *
  * Return: Address of the newly created node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (!node || !head)
		return (NULL);
	node->n = n;
	if (!*head)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (temp->next)
		temp = temp->next;
	node->next = NULL;
	temp->next = node;
	return (node);
}
