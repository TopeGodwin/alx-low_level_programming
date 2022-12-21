#include "main.h"

/** _stcat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int n, t = 0;

	while (dest[t] != '\0' )
	{
		t++;
	}

	for (n = 0; (dest[t + n] = *src++) != '\0'; n++)
	{
	}

	return (dest);
}
