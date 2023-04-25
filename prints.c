#include "main.h"
/**
 * print_string - print a string.
 * @args: list of arguments.
 * Return: the length of the string.
 */
int print_string(va_list args)
{
	int i;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
		for (i = 0; str[i] != '\0'; i++)
			_putchar(str[i]);
		return (i);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
			_putchar(str[i]);
		return (i);
	}
}
