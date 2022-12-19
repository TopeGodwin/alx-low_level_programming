#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input to reverse
 * Return: String and in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int i, strcnt = 0;

	while (s[strcnt] != '\0')
		strcnt = strcnt + 1;

	for (i = 0; i < strcnt; i++)
	{
		strcnt--;
		rev = s[i];
		s[i] = s[strcnt];
		s[strcnt] = rev;
	}
}
