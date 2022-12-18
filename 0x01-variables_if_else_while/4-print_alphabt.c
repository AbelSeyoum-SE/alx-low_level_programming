#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != 'q' && lower != 'e')
			putchar(lower);
		else
			continue;
	}
	putchar('\n');
	return (0);
}
