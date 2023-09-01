#include "main.h"
/**
 * _abs - computer the absolute value
 * @a: input number as an integer
 * Return: absolute value
 */

int _abs(int a)
{
	if (a < 0)
	{
		return (-a);
	}
	else if (a >= 0)
	{
		return (a);
	}
		return (0);
}
