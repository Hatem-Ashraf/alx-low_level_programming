#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
  * add_node_end - addes a new node to the end of the list
  * @head: pointer to the header pointer
  * @str: string of th enew node
  *
  * Return: pointer to the newly created node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	list_t *temp = *head;
	unsigned int i;

	if (!head || !node)
		return (NULL);
	node->str = strdup(str);
	if (!str)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	node->len = i;
	if (!*head)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = node;
	node->next = NULL;
	return (node);
}
