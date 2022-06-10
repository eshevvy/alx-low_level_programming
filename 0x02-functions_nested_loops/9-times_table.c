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
			_putchar(k);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
