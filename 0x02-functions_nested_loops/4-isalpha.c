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
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
