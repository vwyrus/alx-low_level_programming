#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that executes a function given as a parameter on each element of an array.
 * @array: array
 * @size: The amount of element of array
 * @action: is a pointer to the function I am using
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int w;

	if (array == NULL || action == NULL)
		return;

	for (w = 0; w < size; w++)
	{
		action(array[w]);
	}
}

