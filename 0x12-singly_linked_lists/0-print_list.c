#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @l: main pointe
 *
 * Return: nodes no
 */
size_t print_list(const list_t *l)
{
	size_t s = 0;

	while (l)
	{
		if (!l->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", l->len, l->str);
		l = l->next;
		s++;
	}

	return (s);
}

