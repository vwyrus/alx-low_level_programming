#include "function_pointers.h"
/**
 * int_index - pointer to the function to be used to compare values
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int w;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (w = 0; w < size; w++)
	{
		if (cmp(array[w]))
			return (w);
	}
	return (-1);
}

