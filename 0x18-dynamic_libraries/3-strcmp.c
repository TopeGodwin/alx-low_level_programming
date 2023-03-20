#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: input one
 * @s2: input two
 * Return: 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int p; 

	for (p = 0; s1[p] != '\0' && s2[p] != '\0'; p++)
	{
		if (s1[p] != s2[p])
			return (s1[p] - s2[p]);
	}
	return (0);
}
