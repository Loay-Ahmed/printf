#include "main.h"

/**
* _printf - c printf clone
* @format:the string passed as a parameter
*
* Return:the number of character
*/
int _printf(const char *format, ...)
{
va_list args;
int i,  ind, j;
char *str;
if (format == NULL)
return (-1);
va_start(args, format);
i = 0;
ind = 0;
while (format[i] != '\0')
{
if (format[i] == '%')
{
switch (format[i + 1])
{
case 'c':
char c = va_arg(args, int);
write(1, &c, 1);
ind++;
break;
case 's':
str = va_arg(args, char *);
while (*str != '\0')
{
write(1, str, 1);
str++;
ind++;
}
break;
}
i += 2;
}
else
{
write(1, format[i], 1);
i++;
ind++;
}
}
va_end(args);
return (ind);
}
