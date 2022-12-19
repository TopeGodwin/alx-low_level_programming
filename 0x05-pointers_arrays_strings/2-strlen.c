#include "main.h"

/**
 * _strlen - this function changes the initial.
 * @s: this is a parameter to change.
 * Return: len
 */

int _strlen(char *s)
{
	int llen;

	while (*s != '\0')
	{
		llen = llen + 1;
		s = s + 1;
	}
	return (llen);
