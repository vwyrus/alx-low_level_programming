#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: inbetween two integers.
 * @n: integers number
 * @...: variale
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int w;

	va_start(nums, n);

	for (w = 0; w < n; w++)
	{
		printf("%d", va_arg(nums, int));

		if (w != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}

