#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - program that performs simple operations.
 * @argc: Arguments for the operation
 * @argv: Pointers array
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int w1, w2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	w1 = atoi(argv[1]);
	op = argv[2];
	w2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && w2 == 0) ||
	    (*op == '%' && w2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(w1, w2));

	return (0);
}

