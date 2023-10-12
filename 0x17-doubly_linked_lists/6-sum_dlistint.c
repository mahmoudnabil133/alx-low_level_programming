#include "lists.h"
/**
 * sum_dlistint - sum the list.
 * @head: head of the list.
 * Return: sum.
*/
int sum_dlistint(dlistint_t *head)
{dlistint_t *itr = head;
	int sum = 0;

	if (!head)
		return (0);
	while (itr)
	{
		sum += itr->n;
		itr = itr->next;
	}
	return (sum);
}
