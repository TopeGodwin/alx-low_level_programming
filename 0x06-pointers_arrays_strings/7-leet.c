#include "main.h"

/**
 * leet - Entry point
 * ONE if, Two loops only ...
 * @n: input
 * Return: n
 */

char *leet(char *n)
{
	int a, b;
	char letters, replaces;

	letters[] = "aAeEoOtTlL";
	replaces[] = "4433007711";

	a = 0;
	while (n[a] != '\0')
	{
		b = 0;
		while (letters[b] != '\0')
		{
			if (n[a] == letters[b])
			{
				n[a] = replaces[b];
			}
			b++;
		}
		a++
	}
	return (n);
}
