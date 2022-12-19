#include "main.h"

/**
 * _strlen - this function changes the initial.
 * @s: this is a parameter to change.
 * Return: len
 */

int _strlen(char *s)
{
	int i = 1, len = 0;
	char l = s[0];

	while (l != '\0')
	{
		len = len + 1;
		l = s[i++];
	}
	return (len);
}
