#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter.
 * @array: pointer to array
 * @action: pointer to a function
 * @size: size of the array
 *
 * Return: Always 0.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (m < size)
		{
			action(array[m]);
			m++;
		}
	}
}
