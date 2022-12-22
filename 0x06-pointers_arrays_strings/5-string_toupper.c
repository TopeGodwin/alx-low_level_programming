#include "main.h"

/**
 * string_toupper - a function that changes all lower of a string to upper
 * @n: input string
 * Return: capitialized string
 */

char *string_toupper(char *n)
{
	int b;

	for (b = 0; n[b] != '\0'; b++)
	{
		if (n[b] >= 'a' && n[b] <= 'z')
			n[b] = n[b] - 32;
	}
	return (n);
}
