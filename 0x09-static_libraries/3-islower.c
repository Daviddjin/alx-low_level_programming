#include "main.h"
/**
 * _islower - shows 1 if the input is a
 * lowercase character. Another
 * @c: the parameter to be checked
 * Return: always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
