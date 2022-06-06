# include <stdio.h>
# include <time.h>
# include <stdlib.h>

/** main - this function will assign a random number to a variable n each
 * time it's executed. It also prints the last digit of the number stored 
 * in the variable n.
 * Return: gives a value of 0 if the main function is executed successfully,
 * non-zero otherwise.
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d, is %d", n, n % 10);
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % 10 == 0)
		printf("and is 0\n");
	else if (n % 10 < 6 && n % 10 != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
