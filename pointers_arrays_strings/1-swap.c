#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b);
{
	int a;
	int b;

	printf("a=%i, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%i, b=%d\n", a, b);
	return (0);
}
