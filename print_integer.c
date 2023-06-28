#include "main.h"

/**
 * print_integer - Prints an integer to stdout.
 *
 * @args: The va_list (unused).
 *
 * Return: The number of characters printed.
 */

int print_integer(va_list args)
{
	return (print_integer_helper(va_arg(args, int)));
}
