#include "main.h"

/**
 *
 * reverse_array - a function that reverses the content of an array of int
 * @a: content
 * @n: elements of content
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
	int b, temp;

	for (b = 0; b < n; b++)
	{
		n--;
		temp = a[b];
		a[b] = a[n];
		a[n] = temp;
	}
}
