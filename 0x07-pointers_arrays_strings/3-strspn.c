#include "main.h"

/**
 * _strspn - Entry Point
 * @s: intial Input 
 * @accept: final Input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int t, j, valu, chek;

	valu = 0; 

	for (t = 0; s[t] != '\0'; t++)
	{
		chek = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[n] == s[t])
			{
				valu++;
				chek = 1;
			}
		}

		if (chek == 0)
			return (valu);
	}

	return (valu);
}	
