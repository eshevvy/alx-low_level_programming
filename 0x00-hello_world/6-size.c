#include <stdio.h>
/**
 * main - prints the sizes of various types the computer is allowed to run
 * Return: gives a return value of 0 when main is executed successfully 
 * otherwise, non-zero
 * char c - denotes single character
 * double d - denotes double
 * int i - denotes interger
 * %lu - denotes printing format for various outputs
 */
int main(void)
{
	int i;
	double d;
	char c;
	printf("the size of an integer i is: %lu.\n", (unsigned long)sizeof(i));
	printf("the size of a double is: %lu.\n", (unsigned long)sizeof(d));
	printf("the size of a c is: %lu.\n", (unsigned long)sizeof(c));
	return (0);
}
