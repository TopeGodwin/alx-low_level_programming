#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block 
 * description: Get a random number and print the number
 * and if it is positive, negative, or zero 
 * Reeturn: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	eles if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is  negative\n", n);
	return (0);
}
