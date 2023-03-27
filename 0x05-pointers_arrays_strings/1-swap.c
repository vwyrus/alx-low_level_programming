#include "main.h"
/**
 * swap_int - swapping values of two integers
 * @a: integer to swap
 * @b: integer to swap
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

