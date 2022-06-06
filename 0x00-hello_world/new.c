# include <stdio.h>
# include <unistd.h>
/**
 * main - function that prints exactly, "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19, followed by a new line.
 *   Return: return value is 1 if main program executes successfully,
 *   any other number otherwise.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korper,
			2015-10-19\n", 59);
	return (1);
}
