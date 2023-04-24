#ifndef MAIN_H
#define MAIN_H
#include "stdio.h"
#include "stdarg.h"
#include "stdlib.h"
#include "unistd.h"
int print_char(va_list args);
int _printf(const char *format, ...);
int print_string(va_list args);
#endif
