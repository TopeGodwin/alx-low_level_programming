#iclude "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @n: input string
 * Return: caps on first letter of a separator
 */
char *cap_string(char *n)
{
	int a, b, cap = 32;
	int separations[] = {',', ';', '.', '?', '"', '(', ')', '{', ' ', '\n', '\t'};

	for (a = 0; n[a] != '\0'; a++)
	{
		if (n[a] >= 'a' && n[a] <= 'z')
		{
			n[a] = n[a] - cap;
		}

		cap = 0;

		for (b = 0; b <= 12; b++)
		{
			if (n[a] == separators[b])
			{
				b = 12;
				cap = 32;
			}
		}
	}
	return (n);
}
