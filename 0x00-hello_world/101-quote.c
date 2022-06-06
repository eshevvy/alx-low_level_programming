# include <stdio.h>
# include <unistd.h>
/**
 * main - function that exactly prints "and that piece of art is useful"
 * - Dora Kopar, 2015-10-19, followed by a new line.
 * Return: Gives a value of 1 if main executes successfully otherwise
 * any other number.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
