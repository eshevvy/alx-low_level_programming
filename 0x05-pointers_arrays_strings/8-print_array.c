# include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers.
 * @n: numbers of elements of the array to be printed.
 * @a: pointer to array a.
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			_putchar(a[i]);
		}
		else if (i > 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(a[i]);
		}
		_putchar(a[i]);
	}
}
