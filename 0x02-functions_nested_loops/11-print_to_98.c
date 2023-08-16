#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural number n to 98
 * @n: input natural number
 * Return: n to 98
 */

void print_to_98(int n)
{
	int i;

	if (n >= 0 && n <= 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d\n", n);

}
