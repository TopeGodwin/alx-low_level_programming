#include "main.h"

/**
  * times_table -a function that prints the 9 mutiplication table from 0
  * rw = row, col = colum and dicr = number of current result
  * Return: TimesTable
  */
void times_table(void)
{
	int rw, col, dicr;

	for (rw = 0; rw <= 9; rw++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (col = 1; col <= 9; col++)
		{
			dicr = (rw * col);
			if ((dicr / 10) > 0)
			{
				_putchar((dicr / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((dicr % 10) + '0');

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
