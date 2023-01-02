#include <stdio.h>
#include "main.h"

/**
 * print_diagsum - Write a function that prints the sum of the two diagonals of a square matrix of integers.
 * @a: initial input
 * @size: final input
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int t, j, tot1 = 0, tot2 = 0;

	for (t = 0; t <= (size * size); t = t + size + 1)
		tot1 = tot1 + a[t];

	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
		tot2 = tot2 + a[j];
	printf("%d, %d\n", total1, total2);
}
