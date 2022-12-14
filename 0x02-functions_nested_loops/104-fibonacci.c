#include <stdio.h>
#define LONGNUM 10000000000
#define LONGE 9999999999

/**
  * main - finds and prints the first 98 Fibonacci numbers,
  * starting with 1 and 2, followed by a new line.
  *
  * Return: 0
  */

int main(void)
{
	int cnt;
	unsigned long fb1 = 0, fb2 = 1, sum, hlf1, hlf2;
	unsigned long fb1_hlf1, fb1_hlf2, fb2_hlf1, fb2_hlf2;

	for (cnt = 0; cnt < 92; cnt++)
	{
		sum = fb1 + fb2;
		printf("%lu, ", sum);

		fb1 = fb2;
		fb2 = sum;
	}

	fb1_hlf1 = fb1 / LONGNUM;
	fb2_hlf1 = fb2 / LONGNUM;
	fb1_hlf2 = fb1 % LONGNUM;
	fb2_hlf2 = fb2 % LONGNUM;

	for (cnt = 93; cnt < 99; cnt++)
	{
		hlf1 = fb1_hlf1 + fb2_hlf1;
		hlf2 = fb1_hlf2 + fb2_hlf2;
		if (fb1_hlf2 + fb2_hlf2 > LONGE)
		{
			hlf1 +=1;
			hlf2 %= LONGNUM;
		}

		printf("%lu%lu", hlf1, hlf2);
		if (cnt != 98)
			printf(",");

		fb1_hlf1 = fb2_hlf1;
		fb1_hlf2 = fb2_hlf2;
		fb2_hlf1 = hlf1;
		fb2_hlf2 =hlf2;
	}
	printf("\n");
	return (0);
}

