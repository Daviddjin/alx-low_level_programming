#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: change pointer to number
 * @index: bit index to be clear.
 * Return: 1 , -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}



