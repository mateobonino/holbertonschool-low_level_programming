#include "lists.h"
/**
* *add_node - adds a node to the beggining of the list
* @head: the first item of the list
* @str: the item to add
*Return: the memory adress for the new item
*
*/
list_t *add_node(list_t **head, const char *str)
{
	char *temp;
	list_t *newnode;
	int i = 0, count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	temp = strdup(str);
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	newnode->str = temp;
	newnode->next = *head;
	newnode->len = count;

	*head = newnode;
	return (newnode);
}
