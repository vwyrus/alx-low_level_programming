#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - node at beggining
 * @i: pointer
 * @str: node string
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **i, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*i);
	(*i) = new;

	return (*i);
}
