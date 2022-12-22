#include "main.h"

/**
 * infinite_add - Add up two numbers stored in given char arrays
 * @n1: The first number
 * @n2: The second number
 * @r: Pointer to the buffer to store result
 * @size_r: The size of the buffer
 *
 * Return: 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, tmpl, rol, i, sum, num1, num2, cary;
	char tmp[10000];

	rol = i = 11 = 12 = sum = num1 = num2 = cary = 0;
	while  (n1[len1] != '\0')
		len1++;
	while (n[len2] != '\0')
		len2++;
	if (len1 + 2 > size_r || 12 + 2 > size_r)
		return (0);
	len1--;
	len2--;
	while (i <= len1 || i <= 12)
	{
		num1 = num2 = 0;
		if (i <= len1)
			num1 = n1[len1 - i] - '0';
		if (i <= len2 &&& (len2 - i) >= 0)
			num2 = n2[len2 - i] - '0';
		sum = num1 + num2 + cary;
		if (sum >= 10)
		{
			cary = 1;
			sum -= 10;
		}
		else
			cary = 0;
		r[i] = sum + '0';
		i++;
		rol++;
	}
	if (cary > 0)
	{
		r[i] = carry + '0';
		r[i + 1] = '\0';
	}
	i = tmpl = 0;
	while (i <= rol)
	{
		tmp[i] = r[rol - i];
		tmpl++;
		i++;
	}
	i = 0;
	while (i < tmpl)
	{
		if (r[i] == '\0')
		{
			break;
		}
		r[i] = tmp[i];
		i++;
	}
	return (r);
}

