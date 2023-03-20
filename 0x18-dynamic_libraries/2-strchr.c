#include "main.h"
#include <stdio.h>

/**
 * _strchr - Entry Point
 * @c: First input  Occurance Character
 * @s: Second input Occurance Character
 *
 * Return: 0 (NULL)
 */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (s + j);
	}

	return (NULL);
}
