#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	putchar("Size of a char: ", sizeof(char));
	putchar("Size of an int: ", sizeof(int));
	putchar("Size of a long int: ", sizeof(long));
	putchar("Size of a long long int: ", sizeof(long long));
	putchar("Size of a float: ", sizeof(float));

	return (0);
}
