#include "main.h"
/**
 * print_string - print a string.
 * @args: list of arguments.
 * Return: the length of the string.
 */
int print_string(va_list args)
{
int i, len;
char *str = va_arg(args, char *);

len = 0;
if (str == NULL)
{
str = "(null)";
for (i = 0; str[i] != '\0'; i++)
	write(1, &str[i], 1), len++;
return (len);
}
else
{
	for (i = 0; str[i] != '\0'; i++)
		write(1, &str[i], 1), len++;
	return (len);
}
}
