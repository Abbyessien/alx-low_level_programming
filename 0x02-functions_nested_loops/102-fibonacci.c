#include <stdio.h>

/**
 * main - Prints the first 50 fibonacci numbers, starting with 1 and 2
 * seperated by a comma followed by a space
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long i = 0, j = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = i + j;
		printf("%lu", sum);

		i = j;
		j = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
