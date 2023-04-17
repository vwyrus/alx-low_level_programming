#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Write a function that frees dogs.
 * @m: struct dog to free
 */
void free_dog(dog_t *m)
{
	if (m)
	{
		free(m->name);
		free(m->owner);
		free(m);
	}
}

