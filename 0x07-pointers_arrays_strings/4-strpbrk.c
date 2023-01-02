#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Write a function that searches a string for any of a set of bytes
 * @s: intial input
 * @accept:final input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int t, j;

	for (t = 0; s[t] != '\0'; t++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[t] == accept[j])
				return (s + t);
		}
	}

	return (NULL);
}
