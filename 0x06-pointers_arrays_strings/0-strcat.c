#include "main.h"

/**
 * *_strcat - function that concatenates two strings. It appends the src
 * string to the dest string, overwriting the terminating null byte (\0) at
 * the end of dest, and adds a terminating null byte.
 *
 * @src: string to be appended to the dest string.
 * @dest: string whose null byte will be overwritten.
 *
 * Return: returns pointer to dest string.
 */

char *_strcat(char *dest, char *src)
{
	size_t dest_strlen = strlen(dest);
	size_t i, n;

	for (i = 0; src[i] != '\0'; i++)
		dest[i + src[i]] = src[i];
	for (n = 0; n < i; n++)
		dest_strlen = "\0";
	return (dest);
}