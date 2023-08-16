#include "main.h"
/**
 * main - printing a function that checks lowercase character
 * @c: the parameter to be checked
 * Return: always 0
 */
int _islower(int c);
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
