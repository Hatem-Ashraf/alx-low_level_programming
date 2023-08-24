#include "lists.h"
#include <stdio.h>
/**
  * print_list - prints list of nodes
  * @h: pointer to the head of the list
  *
  * Return: number of nodes
  */
unsigned int print_list(const list_t *h)
{
	int i = 0;
	const list_t *temp = h;

	if (!h)
		return (0);
	for (i = 0; temp; i++)
	{
		if (!temp->str)
		{
			printf("[0] (nil)\n");
			temp = temp->next;
			continue;
		}
		printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (i);
}
