#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: pointer to string.
 * Return: void
 */
int _strlen(char *s)
{
	int count = 0;

	char length[];

	length = *s;

	count = strlen(length);

	return (count);
}
