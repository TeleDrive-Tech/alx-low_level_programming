#include <stdio.h>

/**
 * c - Print a two-digit number.
 * @num: The number to be printed.
 */
void c(int num)
{
	putchar((num / 10) + '0');
	putchar((num % 10) + '0');
}

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			c(j);
			putchar(' ');
			c(i);

			if (i != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
