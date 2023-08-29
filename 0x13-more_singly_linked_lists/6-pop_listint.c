#include "lists.h"
/**
 * pop_listint - it pop the head node
 * @head: the head pointer of the list.
 * Return: the deleated nodes data.
*/
int pop_listint(listint_t **head)
{listint_t *temp;
	int n1;

	if (*head == NULL)
		return (0);
	temp = *head;
	n1 = temp->n;
	temp = temp->next;
	free(*head);
	*head = temp;
	return (n1);
}

