#include "main.h"

/**
 * _puts - a function that print a string
 * @str: string input
 * Return: string
 */

void _puts(cahr *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
