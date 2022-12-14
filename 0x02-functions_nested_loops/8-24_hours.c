#include "main.h"

/**
 * jack_bauer - print the time jack bauer uses in 24 hours
 * h =hours, m = minutes, 
 * / 10 allows seconds digit to rotate 
 * for loop breaks before passing 24:00
 * Return:complete 24 hours clock 
 */
void jack_bauer(void)
{
	int hrs, mins;

	for (hrs = 0; hrs <= 23; hrs++)
	{
		for (mins = 0; mins <=59; mins++)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
		}

	}
}
