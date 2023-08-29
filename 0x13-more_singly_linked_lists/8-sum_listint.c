#include "lists.h"
/**
 * sum_listint - it sums the ints of the list.
 * @head: the head pointer of the list.
 * Return: sum of data in the list.
*/
int sum_listint(listint_t *head)
{int sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
