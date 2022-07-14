#include "lists.h"
/**
* sum_listint - returns the sum of all the data of a listint_t linked list
* @head: the items of the list
* Return: the sum of all the data of a list, if it is empty, returns 0
*/
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	if (head == NULL)
	{
		return (sum);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
