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
	char *str, c;
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
					ind++;
					c = va_arg(args, int);
					write(1, &c, 1);
					break;
				case 's':
					str = va_arg(args, char *);
					while (*str)
					{
						write(1, str, 1);
						str++;
						ind++;
					}
					break;
			}
			format += 2;
		}
		else
		{
			write(1, format, 1);
			ind++;
			format++;
		}
	}
	va_end(args);
	return (ind);
}
