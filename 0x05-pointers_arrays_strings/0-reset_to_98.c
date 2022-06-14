#include "main.h"

/**
 * reset_to_98 - function that takes a pointer to an integer n.
 * @n: integer pointed at.
 * Return: return is void.
 */
void reset_to_98(int *n)
{
	int n;

	n = 98;

	int *np;

	np = &n;
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	_putchar('\n');
}
