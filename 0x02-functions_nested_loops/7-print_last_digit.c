#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The int to extract the last digit from
 *
 * Return: Value of the last digit of number
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;

	if (n < 0)
	{
		a = -a;
	}

	_putchar(a + '0');

	return (a);
}
