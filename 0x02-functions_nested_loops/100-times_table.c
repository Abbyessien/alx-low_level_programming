#include "main.h"
/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number to be treated
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
	for (i = 0; i <= n; i++)
	{
	_putchar(48);
	for (j = 0; j <= n; j++)
	{
	_putchar(44);
	_putchar(32);
	k = i * j;
	if (k <= 99)
	_putchar(32);
	if (k <= 9)
	_putchar(32);
	if (k >= 100)
	{
	_putchar((k / 100) + '0');
	_putchar(((k / 10)) % 10 + '0');
	}
	else if (k <= 99 && k >= 10)
	{
	_putchar((k % 10) + '0');
	}
	_putchar((k % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
