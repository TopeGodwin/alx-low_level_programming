#include <stdio.h>
/**
 * main - Print all single digit numbers use base 10 starting from
 * 0 then onlt put char without char variable
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
