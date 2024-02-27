#include <stdio.h>
/**
 *main - Entry Point
 *Description: Write a program that prints all possible
 *combinations of single-digit numbers.
 *Return: 0 (sucessful)
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
