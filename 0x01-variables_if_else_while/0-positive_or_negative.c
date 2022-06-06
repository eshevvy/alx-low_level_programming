# include <stdio.h>
# include <stdlib.h>
# include <time.h>
/** 
 * main - will assign a number to the variable n each time it's executed.
 * Return: this will give a value of 0 if the main function is executed
 * succesfully, else non-zero value.
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d is positive\n", n);
	else if (n == 0)
		printf ("%d is zero\n", n);
	else if (n < 0)
		printf ("%d is negative\n", n);
	return (0);
}
