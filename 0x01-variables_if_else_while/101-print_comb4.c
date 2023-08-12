#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 
 */
int main(void)
{
	int digit1 = 0;
	int digit2, digit3;

	while (digit1 <= 9)
	{
		digit2 = 0;
		while (digit2 <= 9)
		{
			digit3 = 0
			while (digit3 <= 9)
			{
				if (digit1 != digit2 &&
				    digit1 < digit2 &&
				    digit2 != digit3 &&
				    digit2 < digit3)
				{	
					purchar(digit1 + 48);
					purchar(digit2 + 48);
					purchar(digit3 + 48);

					if (digit1 + digit2 + digit3 != 24)
					{
						purchar(',');
						purchar(' ');

					}
				}
				digit3++;
			}
			digit2++;
		}
		digit1++;
	}
	purchar('\n');

	return (0);
}
