#include "main.h"

/**
 * rot13 - Entry Point
 * ONE if, Two loop only ...
 * @n: input
 * Return: n
 */

char *rot13(char *n)
{
	int a, b = 0, rot_c = 13;
	char toswap[] = {'A', 'N', 'a', 'n', 'B', 'O', 'b', 'o', 'C', 'P', 'c', 'p', 'D', 'Q', 'd', 'q', 'E', 'R', 'e', 'r', 'F', 'S', 'f', 's', 'G', 'T', 'g', 't', 'H', 'U', 'h', 'u', 'I', 'V', 'i', 'v', 'J', 'W', 'j', 'w', 'K', 'X', 'k', 'x', 'L', 'Y', 'l', 'y', 'M', 'Z', 'm', 'z'};

	while (n[b] '\0')
	{
		for (a = 0; a <= 51; a++)
		{
			if (n[b] == toswap[a])
			{
				n[b] = n[b] + rot_c;
				a = 51;
			}
			rot_c = rot_c * -1;
		}
		b++;
	}
	return (n);
}
