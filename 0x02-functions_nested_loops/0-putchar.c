# include <stdio.h>
/**
 * main - function that prints "_putchar" followed by a new line.
 * Return: gives a value 0 when main function executes successfully, otherwise
 * non-zero.
 */
int main(void)
{
	int ch = 0, i;

	while (ch < 8)
	{
		i = 0;
		if (i < 1)
		{
			putchar('_');
			i++;
		}
			else if (i < 2)
			{
				putchar('p');
			i++;
			}
			else if (i < 3)
			{
				putchar('u');
				i++;
			}
			else if (i < 4)
			{
				putchar('t');
				i++;
			}
			else if (i < 5)
			{
				putchar('c');
				i++;
			}
			else if (i < 6)
			{
				putchar('h');
				i++;
			}
			else if (i < 7)
			{
				putchar('a');
				i++;
			}
			else if (i < 8)
			{
				putchar('r');
				i++;
			}
			else if (i < 9)
				putchar('\n');
	}
	return (0);
}
