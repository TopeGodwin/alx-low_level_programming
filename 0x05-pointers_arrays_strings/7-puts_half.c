#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of thr input
 */

void puts_half(char *str)
{
	int t, j = 0, strcnt = 0;

	for (; str[j] != '\0'; j++)
		strcnt++;

	t = (strcnt / 2);

	if ((strcnt % 2) == 1)
		t = ((strcnt + 1) /2);

	for (j = t; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}
