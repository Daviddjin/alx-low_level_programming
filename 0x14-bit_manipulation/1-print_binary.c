#include "main.h"

/**
 * print_binary - Shows thie binary equal to the integer number
 * @n: prints binary number
 */

void print_binary(unsigned long int n)
{
	int i, cut = 0;
	unsigned long int curr;

	for (i = 63; i >= 0; i--)
	{
		curr = n >> i;

		if (curr & 1)
		{
			_putchar('1');
			cut++;
		}
		else if (cut)
			_putchar('0');
	}
	if (!cut)
		_putchar('0');
}


