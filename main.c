#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len2;

    len2 = _printf("%c\n");
    printf ("[%d]",len2);
    return 0;
}
