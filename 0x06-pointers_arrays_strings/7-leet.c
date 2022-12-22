#include "main.h"

/**
 * leet - Entry point
 * ONE if, Two loops only ...
 * @n: input
 * Return: 0
 */

char *leet(char *n)
{
	int a, b;
	char *letters, *replaces;

	letters[] = "aAeEoOtTlL";
	replaces[] = "4433007711";

	a = 0;
	while (n[a] != '\0')
	{
		b = 0;
		while (letters[b] != '\0')
		{
			if (n[a] == letter[b])
			{
				n[a] = replaces[b];
			}
			b++;
		}
		a++
	}
	return (n);
}
