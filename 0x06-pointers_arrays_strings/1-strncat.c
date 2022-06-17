#include <main.h>
#include <string.h>

/**
 * *_strncat - function that concatenates two strings.
 *
 * @dest: string that src appends to.
 * @src: appended string, and does not need to be null
 * terminated if it contains n or more bytes.
 * @n: number of bytes.
 *
 * Return: returns pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	for (j = 0; j < i; j++)
		dest[dest_len + i] = '\0';

	return (dest);
}
