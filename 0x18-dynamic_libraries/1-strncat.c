#include "main.h"

/**
 *
 * _strncat - a function that concatenates two strings
 * @dest: copy to
 *
 * @src: copy from
 *
 * @n: input of max bytes to be used
 *
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int t, co;

	for (t = 0; dest[t] != '\0'; t++)
	{
	}

	for (co = 0; co < n; co++)
	{
		dest[t + co] = src[co];
		if (src[co] == '\0')
			co = n;
	}

	return (dest);
}
