#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an interger
 * @n: the interger to prints
 * Return: 0
 */
void print_number(int n)
{
	unsigned int t = n;

	if (n < 0)
	{
		n *= -1;
		t = n;
		_putchar('-');
	}
	t /= 10;
	if (t != 0)
	print_number(t);
	_putchar((unsigned int) n % 10 + '0');
}
