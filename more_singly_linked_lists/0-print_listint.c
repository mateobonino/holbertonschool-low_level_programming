#include "lists.h"
/**
* print_listint - prints a list of ints
* @h: the list
*Return: the number of elements
*/
size_t print_listint(const listint_t *h)
{
	int amount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		amount++;
		h = h->next;
	}
	return (amount);
}
