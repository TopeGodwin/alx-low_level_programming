#include <stdio.h>

/**
  * main - print the sum of all mulitples of 3 or 5 uptill 1024
  *
  * Return:  0
  */
int main(void)
{
	int i, z =0; 
	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0)
		{
			z = (z + i);
		}

		i++;
	}

	printf("%d\n", z);
	return (0);
}
