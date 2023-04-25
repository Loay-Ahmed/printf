#include "main.h"

/**
 * _printf - a function similar to printf()
 * for printing to stdout
 *
 * @format: a string to be printed
 * Return: number of bytes printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int ind = 0;

	va_start(args, format);
	if (!format && *format)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			switch (*(format + 1))
			{
				case 'c':
					ind += print_char(args);
					format++;
					break;
				case 's':
					ind += print_string(args);
					format++;
					break;
				case '%':
					ind += _putchar(*format), format++;
					break;
				default:
					ind += _putchar(*format);
					break;
			} format++;
		}
		else
		{
			ind += _putchar(*format);
			format++;
		}
	}
	va_end(args);
	return (ind);
}

