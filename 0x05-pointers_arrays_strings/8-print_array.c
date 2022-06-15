# include "main.h"
# include <stdio.h>

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
			printf("%d," a[i]);
		}
		else (i > 0)
		{
			printf(",  %d", a[i]);
		}
		printf("'\n'");
	}
}
