# include "main.h"
# include <string.h>
# include <stdio.h>

/**
 * *_strcpy - function that copies the string pointed to by src including
 * the terminating null byte '\0' character.
 * @src: pointer to string
 * @dest: destination for copied string.
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	size_t i, n;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	for (n = 0; n < i; n++)
		dest[i] = '\0';

	return (dest);
}
