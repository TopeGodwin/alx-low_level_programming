#include <stdio.h>

/**
 * print_buffer - Print the entire buffer w/ certain conditions
 * @b: The buffer to print
 * @size: The size of the buffer
 * Return: 0
 */

void print_buffer(char *b, int size)
{
	int n, m;

	n = 0;
	if (size <= 0)
		putchar('\n');
	else
	{
		while (n < size)
		{
			printf("%08x: ", n);
			m = 0;
			while (m < 10)
			{
				if (m % 2 == 0 && m > 0)
					printf(" ");
				if (m + n > size - 1)
					printf(" ");
				else
					printf("%.2x", b[m + n]);
				m++;
			}
			putchar(' ');
			m = 0;
			while (m < 10)
			{
				if (m + n > size - 1)
					break;
				if (b[m + n] >= ' ' && b[m + n] <= '~')
					putchar(b[m + n]);
				else
					putchar('.');
				m++;
			}
			putchar('\n');
			n += 10;
		}
	}
}
