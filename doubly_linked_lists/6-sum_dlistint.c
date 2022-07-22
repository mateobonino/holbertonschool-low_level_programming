#include "lists.h"
/**
* sum_dlistint - sums all the data (n) of a dlistint_t linked list
* @head: the first node of the list
* Return: the sum, if the list is empty, returns 0
*/
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
