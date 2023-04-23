#include <stdio.h>

/**
 * main - Prints nubers from 0 to 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
