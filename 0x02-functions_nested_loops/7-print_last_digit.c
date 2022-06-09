# include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: the number to be checked.
 * Return: returns the value of the last digit.
 */

int print_last_digit(int n)
{
	int j;

	if (n < 0)
	{
		n = -n;
	}
	j = n % 10;

	_putchar(j + '0');

	return (j);
}
