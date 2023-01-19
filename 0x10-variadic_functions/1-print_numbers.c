#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int m;

	va_start(valist, n);

	for (m = 0; m < n; m++)
		printf("%d", va_arg(valist, int));
			if (separator && m < n - 1)
				printf("%s", separator);

	printf("\n");
	va_end(valist);
}
