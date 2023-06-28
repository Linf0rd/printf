#include "main.h"

/**
 * print_integer_helper - Prints an integer to stdout.
 * @n: The integer to print
 *
 * Return: The number of characters printed.
 */

int print_integer_helper(int n)
{
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}

	if (n / 10)
		count += print_integer_helper(n / 10);

	_putchar((n % 10) + '0');
	count++;

	return (count);
}
