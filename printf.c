#include "main.h"

/*
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
char buffer[15000];
if (format == NULL)
return (0);
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
buffer[ind++] = va_arg(args, int);
break;
case 's':
str = va_arg(args, char*);
for (j = 0; str[j] != '\0'; j++)
{
buffer[ind++] = str[j];
}
break;
}
i += 2;
}

else
{
buffer[ind++] = format[i];
i++;
}
}
buffer[ind] = '\0';
write(1, buffer, ind);
va_end(args);
return (ind);
}
