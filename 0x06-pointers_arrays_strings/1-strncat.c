#include "main.h"
#include <string.h>

/**
 * *_strcat - function that concatenates two strings. It appends the src
 * string to the dest string, overwriting the terminating null byte (\0) at
 * the end of dest, and adds a terminating null byte.
 *
 * @src: string to be appended to the dest string.
 * @dest: string whose null byte will be overwritten.
 * @n: the number of bytes to concatenate.
 *
 * Return: returns pointer to dest string.
 */

char *_strcat(char *dest, char *src int n)
{
	size_t i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[n] != '\0' && j < n)
	{
		dest[i] = src[n];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
