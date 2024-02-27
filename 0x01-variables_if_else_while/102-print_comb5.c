#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (successful)
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			if (i < 99 && j < 100)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
			}

			if (i < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);

	return (0);
}
