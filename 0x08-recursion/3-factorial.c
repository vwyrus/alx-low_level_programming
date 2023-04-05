#include "main.h"
/**
 * factorial - factorial of n
 * @n:int
 * Return:factorial of n
 */
int factorial(int n)
{
	int i;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		i = n * factorial(n - 1);
	}
			return (i);

}

