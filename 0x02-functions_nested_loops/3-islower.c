# include "main.h"

/**
 * _islower - checks for lower case character
 * @c: the character to check
 * Return: returns 1 when check is successful
 * otherwise 0
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
