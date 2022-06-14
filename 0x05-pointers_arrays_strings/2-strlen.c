#include "main.h"
#include <string.h>

/**
 * _strlen - function that returns the length of a string
 * @s: pointer to string.
 * Return: void
 */
int _strlen(char *s)
{
	int count = 0;

	char *str;

	str = "God is great";

	count = _strlen(str);

	return (count);
}
