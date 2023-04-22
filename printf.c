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
int ind;
char c;
char *str;
if (format == NULL)
return (-1);
va_start(args, format);
ind = 0;
while (*format != '\0')
{
if (*format == '%')
{
switch (*(format+1))
{
case 'c':
c = va_arg(args, int);
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
format += 2;
}
else
{
write(1, format, 1);
format++;
ind++;
}
}
va_end(args);
return (ind);
}
