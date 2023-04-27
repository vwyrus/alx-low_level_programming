#include <stdlib.h>
#include "lists.h"

/**
 * list_len -  function that returns the number of elements in a linked list_t
 * @l: returns the number of elements in a linked list_
 *
 * Return : numbers in l
 */
size_t list_len(const list_t *l)
{
	size_t i = 0;

	while (l)
	{
		i++;
		l = l->next;
	}
	return (i);
}

