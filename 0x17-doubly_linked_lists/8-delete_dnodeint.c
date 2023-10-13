#include "lists.h"
#include <stdlib.h>
/**
  * insert_dnodeint_at_index - inserts a node at poisition
  * @h: Head of the list
  * @idx: index
  * @n: data
  * Return: address of the new node
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
        unsigned int i = 0;
	dlistint_t *temp = *head;

        while (temp)
        {
                if (index == i)
                {
                        temp->prev->next = temp->next;
                        temp->next->prev = temp->prev;
			free(temp);
                        return (1);
                }
                i++;
                temp = temp->next;
        }
        return (-1);
}
