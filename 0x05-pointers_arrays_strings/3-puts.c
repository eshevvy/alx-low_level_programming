# include "main.h"
# include <string.h>

/**
 * _puts - print a string to stdout.
 * @str: pointer to the string to print.
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
