#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: arguments number
 * @av: argument variables
 * Return: Always 0.
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int count, b, c, d;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	count = 0;
	for (b = 0; b < ac; b++)
	{
		for (c = 0; av[b][c] != '\0'; c++)
			count++;
		count++;
	}
	count++;
	s = malloc(count * sizeof(char));
	if (s == 0)
		return (NULL);
	d = 0;
	for (b = 0; b < ac; b++)
	{
		for (c = 0; av[b][c] != '\0'; c++)
		{
			s[d++] = av[b][c];
		}
		s[d++] = '\n';
	}
	s[d] = '\0';
	return (s);
}

