#include "main.h"
#include <stdio.h>
#include "diagonals.h"

/**
 * print_diagsums - Entry point
 * @matrix: input
 * @size: input
 * Return: Always 0 (Success)
 */

void print_diagsums(int *matrix, int size)
{
	int sum1, sum2, y;

	sum1 = 0;
	sum2 = 0;

	for (y = 0; y < size; y++)
	{
		sum1 = sum1 + matrix[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		sum2 += matrix[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}




