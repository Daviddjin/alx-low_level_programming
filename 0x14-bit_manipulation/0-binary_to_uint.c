#include "main.h"

/**
 * binary_to_uint - change a binary to unsigned int
 * @b: string to binary.
 * Return: number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int de_vl = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		de_vl = 2 * de_vl + (b[i] - '0');
	}

	return (de_vl);
}

