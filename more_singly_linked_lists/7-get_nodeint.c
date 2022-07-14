#include "lists.h"
/**
* get_nodeint_at_index - returns the nth node of listint_t linked list.
* @head: the first item of the list
* @index: the indef of the node, starting at 0
* Return: the nth node of listint_t list, if the node does not exists,
* return NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
		i++;
	}
	return (head);
}
