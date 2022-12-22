#include "main.h"

/**
 * print_number - print integer
 * @n: number
 * Return: void
 */

void print_number(int n)
{
	unsigned int s = n;

	int i, dig = 0;

	if (n < 0)
		s = -n;
	if (n == 0)
		dig = 1;

	while (s >= 1)
	{
		s = s / 10;
		dig++;
	}

	for (i = 0; i < dig; i++)
	{

		int t, d, pow = 1;

		for (t = 0; t < dig - i - 1; t++)
		{
			pow = pow * 10;
		}

		d = ((n / pow) % 10);
		if (n < 0)
		{
			d = -d;
			if (i == 0)
				_putchar(45);
		}
		_putchar(48 + d);
	}
}

