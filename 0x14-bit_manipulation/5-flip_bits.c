#include "main.h"

/**
 * flip_bits - counts number of bits to change
 * to get from one to the other
 * @n: 1st number
 * @m: 2nd number
 * Return: number to be changed to bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int curr;
	unsigned long int exc = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = exc >> i;
		if (curr & 1)
			count++;
	}

	return (count);
}




