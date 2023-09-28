#include "main.h"

/**
 * binary_to_uint - transforms a binary to unsigned int
 * @b: string contains binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int bit_binary = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		bit_binary = 2 * bit_binary + (b[i] - '0');
	}

	return (bit_binary);
}

