#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *Return: returns 1 if there is an error; else returns 0
 */

int main(int argc, char *argv[])
{
	int naira, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	naira = atoi(argv[1]);
	while (naira > 0)
	{
		coins++;
		if ((naira - 25) >= 0)
		{
			naira -= 25;
			continue;
		}
		if ((naira - 10) >= 0)
		{
			naira -= 10;
			continue;
		}
		if ((naira - 5) >= 0)
		{
			naira -= 5;
			continue;
		}
		if ((naira - 2) >= 0)
		{
			naira -= 2;
			continue;
		}
		naira--;
	}
	printf("%d\n", coins);
	return (0);
}
