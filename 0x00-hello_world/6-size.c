#include <stdio.h>
/**
 * main - prints the sizes of various types the computer is allowed to run
 * Return: gives a return value of 0 when main is executed successfully
 * otherwise, non-zero
 * char c - denotes single character
 * int i - denotes interger
 * %d - denotes printing format for various outputs
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long
			long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
