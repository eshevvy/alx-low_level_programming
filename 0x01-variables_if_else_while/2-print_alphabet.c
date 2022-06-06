# include <stdio.h>
/**
 * main - function that prints alphabets in lowercase, followed by a new line.
 * Return: gives a value of zero, if functions main executes successfully,
 * non-zero otherwise.
 */
# define char  a /* first lower case letter of the alphabet */
# define z    25 /* last lower case letter of the alphabet */
# define step  1 /* step size */
int main(void)
{
	int char;

	for (char =a; a <= z; a == a+step)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
