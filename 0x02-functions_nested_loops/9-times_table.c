# include "main.h"

/**
 * times_table - a function that prints the 9 times table,
 * starting with zero.
 * Return: returns void.
 */

void times_table(void)
{
	int i, j, k;

	i = 0;

	while (i <= 9)
	{
		j = 0;

		k = (i * j);
		while (j <= 9)
		{
			_putchar(k + '0');
			j++;
		}
		if (k < 10 && j >= 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(k + '0');
		}
		else if (k >= 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
		}
	}
	_putchar('\n');
}
