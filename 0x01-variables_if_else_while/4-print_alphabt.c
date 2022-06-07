# include <stdio.h>
/**
 * main - function that prints all letters of the alphabets in lower case
 * except the letters q and e.
 * Return: gives the value 0 when main executes successfully, non-zero
 * otherwise.
 */
int main(void)
{
	int ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
