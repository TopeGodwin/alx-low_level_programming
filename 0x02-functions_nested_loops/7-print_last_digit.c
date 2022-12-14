#include "main.h"

/**
 * print_digit - print your last digit number
 * @n: The number ranges from 1 to n
 *
 * Return: last_digit
 /
int print_last_digit(int n)
{
	int last_d = n % 10; 
	if  (last_d < 0)
		last_d *= 1; 
	_putchar(last_d + '0');
	return (last_d);
}
