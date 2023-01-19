#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: Always 0.
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int m = 0, j, c = 0;
	char *strn;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[m])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[m] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[m])
		{
			case 'c':
				printf("%c", va_arg(valist, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(valist, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(valist, double)), c = 1;
				break;
			case 's':
				strn = va_arg(valist, char *), c = 1;
				if (!strn)
				{
					printf("(nil)");
					break;
				}
				printf("%s", strn);
				break;
		} m++;
	} printf("\n"), va_end(valist);
}
