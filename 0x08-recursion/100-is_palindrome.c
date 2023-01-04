#include "main.h"

/**
 * palind2 - obtains length of a
 * @a: string
 * @len: Integer to count length
 *
 * Return: Always 1 (Success)
 * On error, -1 is returned and errno is set well
 */

int palind2(char *a, int len)
{
	if (*a == 0)
		return (len - 1);
	return (palind2(a + 1, len + 1));
}
/**
 * palind3 - compares string vs string reverse
 * @a: string
 * @len: length
 *
 * Return: Always 1 (Success)
 * On error, -1 is returned and errno is set well
 */

int palind3(char *a, int len)
{
	if (*a != *(a + len))
		return (0);
	else if (*a == 0)
		return (1);
	return (palind3(a + 1, len - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evalute
 *
 * Return: Always 1 (Success)
 * On error, -1 is returned and errno is set well
 *
 */

int is_palindrome(char *s)
{
	int len;

	len = palind2(s, 0);
	return (palind3(s, len));
}
