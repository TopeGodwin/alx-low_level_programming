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
	char *let, *rep;

	let = "aAeEoOtTlL";
	rep = "4433007711";

	a = 0;
	while (n[a] != '\0')
	{
		b = 0;
		while (let[b] != '\0')
		{
			if (n[a] == let[b])
			{
				n[a] = rep[b];
			}
			b++;
		}
	return (n);
}
