#include "lists.h"
/**
  * sum_listint - Sums all node's values
  * @head: The head of the list
  *
  * Return: The summation
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
