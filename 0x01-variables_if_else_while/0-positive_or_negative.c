#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
<<<<<<< HEAD
 * Description: get a random number and print the number
=======
 * description: Get a random number and print the number
>>>>>>> 2bebcca8de4a28be5322aa198f6140abd5087a3e
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
<<<<<<< HEAD
	return (0); 
=======
	return (0);
>>>>>>> 2bebcca8de4a28be5322aa198f6140abd5087a3e
}
