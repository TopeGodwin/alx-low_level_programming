#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of arguments
 *
 * Return: Sum of its Parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int m;
	int add = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (m = 0; m < n; m++)
		add += va_arg(valist, int);

	va_end(valist);

	return (add);
}
