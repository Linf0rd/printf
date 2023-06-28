#include "main.h"

/**
 * print_percent - Prints a literal '%' character to stdout.
 * @args: The va_list (unused).
 *
 * Return: The number of characters printed.
 */

int print_percent(va_list args)
{
	(void)args;

	_putchar('%');

	return (1);
}
