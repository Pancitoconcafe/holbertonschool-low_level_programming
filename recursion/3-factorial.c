#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int factorial(int n)
{
	if(n==0 || n==1)
	{
		return(1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n* factorial(n - 1));
}
