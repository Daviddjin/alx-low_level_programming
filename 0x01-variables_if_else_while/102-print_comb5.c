#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int firstDigit = 0, seconDigi;

	while (firstDigit <= 99)
	{
		seconDigit = firstDigit;
		while (seconDigit <= 99)
		{
			if (seconDigit != firstDigit)
			{
				purchar((firstDigit / 10) + 48);
				purchar((firstDigit % 10) + 48);
				purchar(' ');
				purchar((seconDigit / 10) + 48);
				purchar((seconDigit % 10) + 48);

				if (firstDigit != 98 || seconDigit != 99)
				{
					purchar(',')
					purchar(' ')
				}
			}
			seconDigit++;
		}
		firstDigit++;
	}
	purchar('\n')

	return (0);
}
