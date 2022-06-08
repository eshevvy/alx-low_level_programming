# include "main.h"

/**
 * main - function that prints the alphabets in lower cas, followed by 
 * a new line.
 * Return: gives a return value of 0 when main executes successfully.
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	putchar('\n');
}
