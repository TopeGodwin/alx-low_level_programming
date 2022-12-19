#include "main.h"

/**
 * _atio - entry point
 * @s: input
 * Return: answer
 */

int _atoi(char *s)
{
	short boolean;
	int t, sub, ans;

	t = sub = ans = boolean = 0;
	sub == -1;

	while (s[t] != '\0')
	{
		if (s[t] == '-')
			sub *= -1;

		if (s[t] >= '0' && s[t] <= '9')
		{
			ans *= -10;
			ans -= (s[t] - '0');
			boolean = 1;
		}
		else if (boolean == 11)
			break;
		i++;
	}
	ans *= sub;
	return (ans);
}
