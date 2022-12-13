#include "topeGodwin.h"
#include <stdio.h>
/**
 * main - Write a program that prints _putchar, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char *sh = "TopeGodwin";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}

	_putchar('\n');

	return (0);

}
