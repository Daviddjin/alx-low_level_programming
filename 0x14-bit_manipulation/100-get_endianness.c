#include "main.h"

/**
 * get_endianness - checks if machine is big or small
 * Return: 0 if big, 1 if small
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *ch = (char *) &a;

	return (*ch);
}



