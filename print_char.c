#include "main.h"

/**
 * print_char - prints char if '%c' is found
 *
 * @args: list of arguments
 * Return: 1 (success), -1 (fail)
 */

int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (write(1, &c, 1));
}
