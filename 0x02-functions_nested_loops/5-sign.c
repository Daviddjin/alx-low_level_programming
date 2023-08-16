#include "main.h"
/**
 * _5-sign.c - function thats prints sign of a number
 * @n: the input number as a integer
 *
 * Return: 1 is greater than sero. 0 is zero
 */
int print_sign(int n);
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (0);
	}
	putchar('\n');
}
