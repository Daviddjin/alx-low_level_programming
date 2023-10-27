#include "main.h"

/**
 * get_bit - returns the value in bit at an index to decimal number
 * @n: number search
 * @index: bit index
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_vl;

	if (index > 63)
		return (-1);

	bit_vl = (n >> index) & 1;

	return (bit_vl);
}


















