#include "main.h"

/**
 * rot13 - Entry Point
 * ONE if, Two loop only ...
 * @n: input
 * Return: n
 */

char *rot13(char *n)
{
	char *input, *output;
	int count, count2;

	input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	count = 0;
	while (n[count] != '\0')
	{
		count2 = 0;
		while (input[count2] != '\0')
		{
			if (n[count] == input[count2])
			{
				n[count] = output[count2];
				break;
			}
			count2++;
		}
		count++;
	}
	return (n);
}
