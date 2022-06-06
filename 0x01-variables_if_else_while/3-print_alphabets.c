# include <stdio.h>
/**
 * main - function that prints alphabets in lowercase, followed by a new line.
 * Return: gives a value of zero, if functions main executes successfully,
 * non-zero otherwise
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
{
		putchar(ch);
}
	for (ch = 'A'; ch <= 'Z'; ch++)
{
		putchar(ch);
}
	putchar('\n');
	return (0);
}
