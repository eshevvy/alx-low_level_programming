# include "main.h"

/**
 * _islower - checks for lower case character
 * Return: returns 1 when check is successful
 * otherwise 0
 */
int _islower(int c)
{
	int ch;

	if (ch >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
