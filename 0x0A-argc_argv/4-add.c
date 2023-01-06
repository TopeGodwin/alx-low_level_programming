#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Program that takes in all integer arguments and returns the sum
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[])
{
	int i, j, sum, len;
	char *pointer;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			pointer = agrv[i];
			len = strlen(pointer);
			
			for (j = 0; j < len; j++)
			{
				if (isdigit(*(pointer + j)) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
		}

	printf("%d\n", sum);
	}
	return (0);
}
