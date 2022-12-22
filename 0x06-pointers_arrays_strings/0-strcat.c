#include "main.h"

/** _strcat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 *
 * Return: Pointer to dest string
 */
char *_strcat(char *dest, char *src)
{
	int l1, l2, len;

	l1 = l2 = 0;
	while (dest[l1] != '\0')
	{
		l1++;
	}
	while (src[l2] != '\0')
	{
		l2++;
	}
	len = l2;
	l2 = 0;
	while (l2 < len)
	{
		dest[l1] = src[l2];
		l1++;
		l2++;
	}
	return (dest);
}
