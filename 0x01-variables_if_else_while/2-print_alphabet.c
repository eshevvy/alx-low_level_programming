# include <stdio.h>
/**
 * main - function that prints alphabets in lowercase, followed by a new line.
 * Return: gives a value of zero, if functions main executes successfully,
 * non-zero otherwise.
 */
int main(void)
{
	int c;

	while ((c = getchar()) != EOF)
		putchar(c);
}
