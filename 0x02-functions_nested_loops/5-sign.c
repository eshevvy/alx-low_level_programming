# include "main.h"

/**
 * print_sign - function that prints the sign of a number.
 * @n: number that is checked.
 * Return: returns 1 and prints '+' if n is greater than 0.
 * returns 0 and prints '0', if n is equal to 0.
 * returns -1 and prints '-1' if n is less than 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
