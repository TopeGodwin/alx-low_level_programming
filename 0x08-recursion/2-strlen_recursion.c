#include "main.h"

/**
 * _strlen_recursion - Returns Length of String
 * @s: string
 * Return: Always 1 (Success)
 * On erro, -1 is returned and errno is set well.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 +  _strlen_recursion(s + 1));
	}
	return (0);
}
