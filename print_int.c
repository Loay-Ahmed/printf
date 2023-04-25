#include "main.h"

/**
 * print_int - prints integer values to sdtout
 * @args: list of arguments
 * Return: number of bytes printed
 */
int print_int(va_list args)
{
	int num = va_arg(args, int);
	int n = num, tenth = 1, digit;
	int bytes = 0;

	if (num < 0)
	{
		bytes += _putchar('-');
		n *= -1;
		num *= -1;
	}
	while (n / 10 != 0)
	{
		tenth *= 10;
		n /= 10;
	}
	n = num;
	while (tenth > 0)
	{
		digit = n / tenth;
		bytes += _putchar(digit + '0');
		n -= (digit * tenth);
		tenth /= 10;
	}
	return (bytes);
}
