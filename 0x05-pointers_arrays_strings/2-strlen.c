#include "main.h"
#include <string.h>

/**
 * _strlen - function that returns the length of a string
 * @s: pointer to string.
 * Return: void
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(i);
	}
	return (i);
}
