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
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replacer[] = {'4', '3', '0', '7', '1'};

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (n[a] == find[b])
			{
				n[a] = replace[b / 2];
				x = 9;
			}
		}
	}

	return (n);
}
