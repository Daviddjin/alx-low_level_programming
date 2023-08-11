#include <stdio.h>

/**
 * main - a C program that prints the size of various types
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)", sizeof(char));
	printf("Size of a int: %zu bytes(s)", sizeof(int));
	printf("Size of a long int: %zu byte(s)", sizeof(long int));
	printf("Size of a long long int: %zu bytes(s)", sizeof(long long int));
	printf("Size of a float: %zu byte(s)", sizeof(float));
	return (0);
}
