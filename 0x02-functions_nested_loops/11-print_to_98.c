# include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers,
 * n to 98.
 * @n: natural numbers.
 * Return: void.
 */

void print_to_98(int n)
{
	for (n = 0; n < 99; n++)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		if (n >= 10)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
