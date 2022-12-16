#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an interger 
 * @n: the interger to prints
 * Return: 0
 */
void print_number(int n)
{
	unsigned int t;
	
	if (n < 0)
	{
		_putchar('-');
		t = -n;
	}
	else
	{
		t = -n;
	}
	if (t / 10 != 0)
		print_number(t % 10) + '0');
}
