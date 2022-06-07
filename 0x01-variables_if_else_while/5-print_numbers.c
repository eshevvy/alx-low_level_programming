# include <stdio.h>
/**
 * main - function that prints all single digit number of base 10
 * starting from 0
 * Return: gives a value of 0 when main executes successfully
 * otherwise, non-zero.
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}
