#include "main.h"

/**
 * _memsset - Entry point
 * @s: will Pointed destination
 * @b: will be constant byte
 * @n: bytes
 * 
 * Return: 0 (pointer to the memory area s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
