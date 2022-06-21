#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte.
 * @n: n bytes of memory.
 * @s: pointer to memory.
 * @b: constant byte.
 *
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		i++;
		s[i] = b;
	}
	return (s);
}
