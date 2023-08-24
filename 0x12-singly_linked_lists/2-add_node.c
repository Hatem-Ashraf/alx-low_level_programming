#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
  * add_node - addes a new node to the list
  * @head: pointer to the header pointer of the list
  * @str: the string of the new node
  *
  * Return: pointer to the newly created node
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	unsigned int i;

	if (!head || !node)
		return (NULL);
	node->str = strdup(str);
	if (!str)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	node->len = i;
	node->next = *head;
	*head = node;
	return (node);
}
