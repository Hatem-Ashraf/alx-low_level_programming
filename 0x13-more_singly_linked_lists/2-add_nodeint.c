#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - adds a new node to the list
  * @head: The head of the list
  * @n: integer value
  * Return: The addess of the newly craeted node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
