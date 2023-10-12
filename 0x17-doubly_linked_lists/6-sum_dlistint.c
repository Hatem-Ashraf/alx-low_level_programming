#include "lists.h"
#include <stdlib.h>
/**
  * sum_dlistint - Summs all the data
  * @head: Head of the list
  * Return: Summation of all values
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp1 = head;
	int sum = 0;

	if (!head)
		return (sum);
	while (temp1)
	{
		sum += temp1->n;
		temp1 = temp1->next;
	}
	return (sum);
}
