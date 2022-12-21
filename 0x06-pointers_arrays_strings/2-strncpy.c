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

	for (j = 0; src[j] != '\0'; j++)
		if (i < n)
			dest[j] = ssrc[j];
	while (i < n)
		dest[i++] = '\0';

	return (dest);
}
