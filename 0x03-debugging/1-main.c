#include <stdio.h>
#include "main.h"

/**
 * main - causing an infinity loop
 *
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	printf("Infinite loop avoided! \\o/\n");

	return (0);

}