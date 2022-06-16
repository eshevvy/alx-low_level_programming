# include "main.h"
# include <string.h>
# include <stdio.h>

/**
 * _strcpy - function that copies the string pointed to by src including
 * the terminating null byte '\0' character.
 * @src: pointer to string
 * @dest: destination for copied string.
 * Return value: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i, n;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return dest;
}
