# include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the
 * alphabets, in lower case, followed by a new line.
 */
void print_alphabet_x10(void)
{
	int ch;
	int j;

	ch = 0;
	while (ch < 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		ch++;
	}
}
