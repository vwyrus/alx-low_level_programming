#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: parameters numba
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int w, sum = 0;

	va_start(ap, n);

	for (w = 0; w < n; w++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

