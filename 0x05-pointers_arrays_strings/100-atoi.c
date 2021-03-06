#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, a, b, c, d, digit;

	i = 0;
	a = 0;
	b = 0;
	c = 0;
	d = 0;
	digit = 0;

	while (s[c] != '\0')
		c++;
	while (i < c && d == 0)
	{
		if (s[i] == '-')
			++a;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (a % 2)
				digit = -digit;
			b = b * 10 + digit;
			d = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			d = 0;
		}
		i++;
	}
	if (d == 0)
		return (0);
	return (b);
}
