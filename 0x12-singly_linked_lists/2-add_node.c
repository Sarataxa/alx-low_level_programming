#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - length of a given string
 * @str: String
 *
 * Return: the length of the str
 */
int _strlen(char *str)
{
	int length = 0;

	if (!str)
		return (0);
	while (*str++)
		length++;
	return (length);
}

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (!head || !node)
		return (NULL);
	if (str)
	{
		node->str = strdup(str);
		if (!node->str)
		{
			free(node);
			return (NULL);
		}
		node->len = _strlen(node->str);
	}
	node->next = *head;
	*head = node;
	return (*head);
}
