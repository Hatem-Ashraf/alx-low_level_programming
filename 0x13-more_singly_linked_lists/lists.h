#ifndef MAIN_H
#define MAIN_H

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

unsigned int print_listint(const listint_t *h);

unsigned int listint_len(const listint_t *h);

#endif