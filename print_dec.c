#include "main.h"

/**
 * print_dec - function that prints decimal number
 * @args: list of arguments
 * Return: number of bytes printed
 */

int print_dec(va_list args)
{
	int nint, bytes = 0, diff;
	float nfloat, n = va_arg(args, double);

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	nint = n;
	nfloat = n - nint;
	bytes += print_int(&nint);
	_putchar('.');
	diff = nfloat;
	while (diff > 0)
	{
		nfloat *= 10;
		nint = nfloat;
		diff = nfloat - nint;
	}
	if (nfloat == 0.0)
	{
		bytes += _putchar('0');
		return (bytes);
	}
	bytes += print_int(&nint);
	return (bytes);
}
