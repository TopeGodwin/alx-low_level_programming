#include "main.h"

/**
 *
 * _strncpy - Entry point
 *
 * @dest: copy to
 * @src: copy from
 * @n: input number of char
 * Return: Always 0 (Success)
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
			dest[j] = src[j];
	for (; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
