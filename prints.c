#include "main.h"
/**
 * print_string - print a string.
 * @str: string that will be printed.
 * Return: the length of the string.
 */
int print_string(const char *str)
{
int i, len;
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
