#include "main.h"
/**
 * print_last_digit - function that print the last digit
 * @n: input number as an integer
 *
 * Return: last digit
 */
void print_alphabet_x10(void)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	putchar(k + '0');
	return (k);
}
