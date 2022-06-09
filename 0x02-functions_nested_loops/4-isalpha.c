# include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character that checks for lower
 * or upper case.
 * Return: gives a value of 1 is check is
 * successful else, 0
 */
int _isalpha(int c)
{
	int i, j;

	c = i;

	while (c >= 'a' && c <= 'z')
	{
		_putchar(c);
		c++;
		c = j;
		if (j >= 'A' && j <= 'Z')
		{
			_putchar(j);
			return (1);
		}
		else
			return (0);
	}
}
