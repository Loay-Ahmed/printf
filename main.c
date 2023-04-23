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

  int len,len2;
  len =  _printf("Let's try to printf %s\n", NULL);
  len2 = printf("Let's try to printf %s\n", NULL);
  printf("%d\n", len);
  printf("%d\n", len2);
  
   return (0);
}
