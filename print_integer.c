#include "main.h"

/**
 * print_integer - Prints an integer to stdout.
 * @args: The va_list containing the integer to print
 *
 * Return: The number of characters printed.
 */

int print_integer(va_list args)
{
	int n;
	int count = 0;

	va_list args_copy;
	va_copy(args_copy, args);

	n = va_arg(args_copy, int);

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}

	if (n / 10)
		count += print_integer(args_copy);

	_putchar((n % 10) + '0');
	count++;

	va_end(args_copy);

	return (count);
}
