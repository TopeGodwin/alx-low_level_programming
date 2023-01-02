#include "main.h"

/**
 * _memcpy - Entry point 
 * @n: input number
 * @src: memory from input area
 * @dest: memory to input area
 *
 * Return: 0 (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int t; 

	for (t = 0; t < n; t++)
		dest[t] = src[t];

	return (dest);
}
