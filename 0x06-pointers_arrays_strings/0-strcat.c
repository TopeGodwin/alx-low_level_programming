#include "main.h"

/** _stcat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0'
	return (start);
}
