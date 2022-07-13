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
	int count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	temp = strdup(str);
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	while (str[count] != '\0')
	{
		count++;
	}
	newnode->str = temp;
	newnode->next = *head;
	newnode->len = count;

	*head = newnode;
	free(newnode);
	return (newnode);
}
