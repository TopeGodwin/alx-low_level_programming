#include "main.h"

/** _stcat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int n, m, t;

	n = m = 0;
	while (dest[n] != '\0' )
	{
		n++;
	}

	while (src[m] != '\0')
	{
		m++;
	}
	t = m;
	m = 0;
	while (m < t)
	{
		dest[n] = src[m];
		n++;
		m++;
	}
	return (dest);
}
