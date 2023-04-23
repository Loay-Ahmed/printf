#include "main.h"

int main()
{
	int len, len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("%d, %d\n", len, len2);
	len = _printf("this is a sentence %s %c\n", "Hello!", 'c');
	len2 = printf("this is a sentence %s %c\n", "Hello!", 'c');
	printf("%d, %d\n", len, len2);
	len = _printf("another sentence %s %c\n", "hell0!", '9');
	len2 = printf("another sentence %s %c\n", "hell0!", '9');
	printf("%d, %d\n", len, len2);
	return (0);
}
